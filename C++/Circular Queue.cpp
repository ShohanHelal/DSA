#include <bits/stdc++.h>
using namespace std;

int main()
{
    int op, n;
    cout << "Enter The Size of The queue: ";
    cin >> n;

    int qu[n], fr = -1, re = -1;

    while (1)
    {
        cout << "\nPress...\n1 To enqueue\n2 To dequeue\n3 To Print\n0 To Exit\n\n";
        cin >> op;

        if (op == 1)
        {
            int y;
            cout << "Enter The Value For enqueue: ";
            cin >> y;


            if ((re + 1) % n == fr)
            {
                cout << "Queue Overflow!\n";
            }
            else
            {
                if (fr == -1)
                {
                    fr = 0;
                }
                re = (re + 1) % n;
                qu[re] = y;
            }
        }
        else if (op == 2)
        {
            if (fr == -1)
            {
                cout << "Queue Underflow!\n";
            }
            else
            {
                cout << "Dequeued: " << qu[fr] << "\n";
                if (fr == re)
                {

                    fr = re = -1;
                }
                else
                {
                    fr = (fr + 1) % n;
                }
            }
        }
        else if (op == 3)
        {
            if (fr == -1)
            {
                cout << "Queue is Empty!\n";
            }
            else
            {
                cout << "Queue: ";
                int i = fr;
                while (1)
                {
                    cout << qu[i] << " ";
                    if (i == re){
                        break ;
                        }
                    i = (i + 1) % n;
                }
                cout << "\n";
            }
        }
        else if (op == 0)
        {
            break;
        }
        else
        {
            cout << "Invalid Option!\n";
        }
    }

    return 0;
}
