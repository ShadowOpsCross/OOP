using System;
using System.Collections.Generic;
using System.Linq;

namespace TextLibrary
{
    public interface ICharReplacer
    {
        void ReplaceChar(char oldChar, char newChar);
    }
    public class TextLine : ICharReplacer
    {
        private string text;

        public TextLine(string t)
        {
            text = t;
        }

        public string GetText() { return text; }
        public int GetLength() { return text.Length; }

        public void ReplaceChar(char oldChar, char newChar)
        {
            text = text.Replace(oldChar, newChar);
        }
    }

    public class TextDocument : ICharReplacer
    {
        private List<TextLine> lines;

        public TextDocument()
        {
            lines = new List<TextLine>();
        }

        public void AddLine(TextLine line)
        {
            lines.Add(line);
        }

        public bool RemoveLine(int index)
        {
            if (index >= 0 && index < lines.Count)
            {
                lines.RemoveAt(index);
                return true;
            }
            return false;
        }

        public void ClearText()
        {
            lines.Clear();
        }

        public int GetTotalCharacters()
        {
            return lines.Sum(l => l.GetLength());
        }

        public int FindStringCount(string searchStr)
        {
            int totalCount = 0;
            foreach (var line in lines)
            {
                string s = line.GetText();
                int index = s.IndexOf(searchStr);
                while (index != -1)
                {
                    totalCount++;
                    index = s.IndexOf(searchStr, index + searchStr.Length);
                }
            }
            return totalCount;
        }

        public void ReplaceChar(char oldChar, char newChar)
        {
            foreach (var line in lines)
            {
                line.ReplaceChar(oldChar, newChar);
            }
        }

        public List<string> GetAllLines()
        {
            return lines.Select(l => l.GetText()).ToList();
        }
    }
}