using System;

namespace StringLibrary
{
    public class StringBase
    {
        protected string value;

        public StringBase() { value = ""; }
        public StringBase(string val) { value = val; }
        public StringBase(StringBase other) { value = other.value; }

        public int GetLength() { return value.Length; }
        public string GetValue() { return value; }
    }

    public class CharString : StringBase
    {
        public CharString() : base() { }
        public CharString(string val) : base(val) { }
        public CharString(CharString other) : base(other) { }

        public void SortDescending()
        {
            char[] charArray = value.ToCharArray();
            Array.Sort(charArray);
            Array.Reverse(charArray);
            value = new string(charArray);
        }
    }
}