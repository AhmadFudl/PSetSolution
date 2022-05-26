/*
#include <iostream>

using namespace std;

int main() {
    //bool a; // 1 byte flase, true
    // short a = 41; // 2 bytes 32767
    // int a = 888888; // 4 bytes 2147483647
    // long long a = -9999999999; // 8 bytes 9223372036854775807
    // float a = 0.3; // 4 bytes
    // double a = 0.1000000001; // 8 bytes
    // char a = '1'; // 1 byte
    // string a = "Hello, world\n"; // ?? bytes
}
*/


/*
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    printf("Hello, world!\n");
    cout << "Hello, world" << endl;
}

// %c	Character
// %d	Signed integer
// %f	Float values
// %hi	Signed integer (short)
// %hu	Unsigned Integer (short)
// %i	Unsigned integer
// %l or %ld or %li	Long
// %lf	Double
// %Lf	Long double
// %lu	Unsigned int or unsigned long
// %lli or %lld	Long long
// %llu	Unsigned long long
// %o	Octal representation
// %s	String
// %u	Unsigned int
// %x or %X	Hexadecimal representation
// %%	Prints % character
*/

/*
#include <iostream>

using namespace std;

int main() {
    unsigned int a = 5, b = 4, c = 0;
    a = a + 1;
    a += 1;
    a++;
    ++a;
    cout << a/4.0 << endl;
    double sum, d = 0.1, e = 0.2;
    sum = d + e;
}
*/

/*
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a;
    cin >> a;
    scanf("%d", a);
    cout << a << endl;
}
*/


/*
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    bool value = true;
    if (value) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
}
*/

/*
#include <iostream>

using namespace std;

int main() {
    unsigned int a = UINT32_MAX; // = 2^32 - 1 = 4294967295
    long long b = a + 1; // 42949697296
    cout << b << endl;
}
*/

/*
#include <iostream>
#include <stdio.h>

typedef long long ll;
//#define ONLINE_JUDGE
#define put(a) printf("%d", a)
#define endl '\n'

using namespace std;

int main() {
    int a;
#ifndef ONLINE_JUDGE
    freopen("input", "r",stdin);
#endif
    cin >> a;
    put(a);
    cout << endl;
}
*/
