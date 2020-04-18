#if 0
template <typename T>
T maxn(T in_array[], int array_size)
{
    T max = in_array[0];
    for (int i = 0; i < array_size; i++)
    {
        if (max < in_array[i])
        {
            max = in_array[i];
        }
    }

    return max;
}
// 显示具体化
template <> const char* maxn(const char* in_str[], int n)
{
    const char* str = in_str[0];

    for (int i = 0; i < n; i++)
    {
        if (strlen(str) < strlen(in_str[i]))
        {
            str = in_str[i];
        }
    }

    return str;
}
void p8_6(void)
{
    int int_array[6] = { 43, 235, 54, 232, 123, 65 };
    double double_array[4] = { 32.1, 453.2, 53.3, 67.4 };
    const char* str_array[5] = { "Hello Jimmy!", "Hello World!", "ABCDEFG,HIJKLMN", "Today is a goood day!", "C++ Primer Plus!" };

    int int_max = maxn(int_array, 6);
    double double_max = maxn(double_array, 4);
    const char* length_max_str = maxn(str_array, 5);

    cout << "max of int array: " << int_max << endl;
    cout << "max of double array: " << double_max << endl;
    cout << "max length string of string array: " << length_max_str << endl;
}
#endif 