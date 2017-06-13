// Declare second integer, double, and String variables.
    int j;
    double dd;
    string ss;
    double ans;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> j >> dd;
    getline(cin >> ws, ss);
    // Print the sum of both integer variables on a new line.
    cout << i + j << endl;
    // Print the sum of the double variables on a new line.
    ans = d + dd;
    //cout << d + dd << endl;
    printf("%.1f", ans);
    cout << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + ss << endl;