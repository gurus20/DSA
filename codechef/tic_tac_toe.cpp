#include <iostream>
using namespace std;

int win_check(string mat[3][3])
{
    int x_d_1 = 0, x_d_2 = 0;
    int o_d_1 = 0, o_d_2 = 0;

    for (int i = 0; i < 3; i++)
    {
        int x_r = 0, x_c = 0;
        int o_r = 0, o_c = 0;
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] == "X")
            {
                x_r++;
            }

            if (mat[i][j] == "O")
            {
                o_r++;
            }

            if (mat[j][i] == "X")
            {
                x_c++;
            }

            if (mat[j][i] == "O")
            {
                o_c++;
            }

            if (i == j && mat[i][j] == "X")
            {
                x_d_1++;
            }
            if (i == j && mat[i][j] == "O")
            {
                o_d_1++;
            }
        }
        if (x_r == 3 || x_c == 3 || x_d_1 == 3)
        {
            return 1;
        }

        if (o_r == 3 || o_c == 3 || o_d_1 == 3)
        {
            return 1;
        }
    }
    int l = 0;
    for (int k = 2; k >= 0; k--)
    {
        if (mat[k][l] == "X")
        {
            x_d_2++;
            l++;
        }
    }

    l = 0;
    for (int k = 2; k >= 0; k--)
    {
        if (mat[k][l] == "O")
        {
            o_d_2++;
            l++;
        }
    }

    if (x_d_2 == 3 || o_d_2 == 3)
    {
        return 1;
    }

    return 0;
}

void show_game(string mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "    |    |    \n";
        for (int j = 0; j < 3; j++)
        {
            cout << "___" << mat[i][j];
            if (j < 2)
            {
                cout << "|";
            }
        }
        cout << endl;
    }
}

int *get_pos(int i, int *arr)
{
    if (i == 1)
    {
        arr[0] = 0;
        arr[1] = 0;
    }
    if (i == 2)
    {
        arr[0] = 0;
        arr[1] = 1;
    }
    if (i == 3)
    {
        arr[0] = 0;
        arr[1] = 2;
    }
    if (i == 4)
    {
        arr[0] = 1;
        arr[1] = 0;
    }
    if (i == 5)
    {
        arr[0] = 1;
        arr[1] = 1;
    }
    if (i == 6)
    {
        arr[0] = 1;
        arr[1] = 2;
    }
    if (i == 7)
    {
        arr[0] = 2;
        arr[1] = 0;
    }
    if (i == 8)
    {
        arr[0] = 2;
        arr[1] = 1;
    }
    if (i == 9)
    {
        arr[0] = 2;
        arr[1] = 2;
    }
    return arr;
}

void start_game()
{
    int player_1_move;
    int player_2_move;

    string game_mat[3][3];
    int d = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            game_mat[i][j] = to_string(d);
            d++;
        }
    }

    show_game(game_mat);
    int inp = 0;
    while (inp != 9)
    {
        if (inp % 2 == 0)
        {
            cout << "Player 1 Move\n";
            cin >> player_1_move;
            int pos_arr[2];
            int *pos = get_pos(player_1_move, pos_arr);
            int i = pos[0];
            int j = pos[1];
            if (game_mat[i][j] == "X" || game_mat[i][j] == "O")
            {
                cout << "Cant Place Here\n";
                inp--;
            }
            else
            {
                game_mat[i][j] = "X";
                show_game(game_mat);
                if (win_check(game_mat))
                {
                    cout << "Player 1 Wins" << endl;
                    return;
                }
            }
        }
        else
        {
            cout << "Player 2 Move\n";
            cin >> player_2_move;

            int pos_arr[2];
            int *pos = get_pos(player_2_move, pos_arr);
            int i = pos[0];
            int j = pos[1];
            if (game_mat[i][j] == "X" || game_mat[i][j] == "O")
            {
                cout << "Cant Place Here\n";
                inp--;
            }
            else
            {
                game_mat[i][j] = "O";
                show_game(game_mat);
                if (win_check(game_mat))
                {
                    cout << "Player 2 Wins" << endl;
                    return;
                }
            }
        }
        inp++;
    }
    if (inp == 9 && win_check(game_mat) == 0)
    {
        cout << "NOBODY WINS\n";
    }
}

void help()
{
    cout << "Help\n";
}

void menu()
{
    cout << "1. Start Game\n";
    cout << "2. Help\n";
    cout << "0. Exit\n";

    int select;
    cin >> select;

    switch (select)
    {
    case 1:
        start_game();
        break;

    case 2:
        help();
        break;
    case 0:
        exit(0);

    default:
        menu();
        break;
    }
}

int main()
{
    cout << "WELCOME TO TIC-TAC-TOE" << endl;
    // menu();
    start_game();
    return 0;
}