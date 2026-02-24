class StringClass
{
    public string text;

    public StringClass(string t)
    {
        text = t;
    }

    public int Length()
    {
        return text.Length;
    }

    public void ShiftRight()
    {
        if (text.Length <= 1)
            return;

        char last = text[text.Length - 1];
        text = last + text.Substring(0, text.Length - 1);
    }
}