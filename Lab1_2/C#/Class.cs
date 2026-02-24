using System;

namespace StringLibrary
{
    public class StringClass
    {
        private string text; // прихований рядок

        // Конструктор без параметрів
        public StringClass()
        {
            text = "";
        }

        // Конструктор з параметром
        public StringClass(string s)
        {
            text = s;
        }

        // Конструктор копіювання
        public StringClass(StringClass other)
        {
            text = other.text;
        }

        // Деструктор
        ~StringClass()
        {
            // Garbage Collector
        }

        // Довжина
        public int Length()
        {
            return text.Length;
        }

        // Зсув
        public void ShiftRight()
        {
            if (text.Length > 1)
            {
                char last = text[text.Length - 1];
                text = last + text.Substring(0, text.Length - 1);
            }
        }

        // Отримати рядок
        public string GetText()
        {
            return text;
        }
    }
}