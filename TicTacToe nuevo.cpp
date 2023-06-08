#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    const int ROWS = 3; // Declaracion entero constante del numero filas
    const int COLUMNS = 3; // Declaracion entero constante del numero columnas
    string board[ROWS][COLUMNS] = { {" 0 ", " 1 ", " 2 "},
                                    {" 3 ", " 4 ", " 5 "},
                                    {" 6 ", " 7 ", " 8 "} }; // Matriz
    int empezar; // Declaracion variable entera para decidir que jugador va a comenzar
    int colocacion; // Declaracion entero donde se quiere colocar el caracter
    bool validacion1; // Declaracion de variable booleana para una validacion
    cout << "Bienvenido a TIC TAC TOE" << endl << "El jugador 1 usara el caracter X y el jugador 2 el caracter O" << endl << endl;
    cout << "Quien va a empezar?" << endl << "1- Jugador" << endl << "2- Jugador 2" << endl;
    do
    {
        cin >> empezar; // Se pide un dato entero donde se escoge el jugador que comienza
        cout << endl;
        if (empezar == 1) // if por si se decide que va a empezar el jugador uno (X)
        {
            cout << "A continuacion se le va a mostrar el tablero" << endl << endl;
            for (int i = 0; i < ROWS; i++) // ciclo for para crear la tabla donde posteriormente se pondran caracteres
            {
                for (int j = 0; j < COLUMNS; j++)
                {
                    cout << board[i][j];
                }
                cout << endl << endl;
            }
            do // ciclo do-while que se va a repetir para que los jugadores coloquen los caracteres en todos los espacios
            {
                cout << "Jugador numero 1 (X), en donde desea agregar la X?" << endl;
                do
                {
                    cin >> colocacion; // Se le pide al jugador uno la ubicacion donde quiere poner su caracter
                    cout << endl;
                    switch (colocacion)
                    {
                    case 0:
                        if (board[0][0] == " X " || board[0][0] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[0][0] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 1:
                        if (board[0][1] == " X " || board[0][1] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[0][1] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 2:
                        if (board[0][2] == " X " || board[0][2] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[0][2] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 3:
                        if (board[1][0] == " X " || board[1][0] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[1][0] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 4:
                        if (board[1][1] == " X " || board[1][1] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[1][1] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 5:
                        if (board[1][2] == " X " || board[1][2] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[1][2] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 6:
                        if (board[2][0] == " X " || board[2][0] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[2][0] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 7:
                        if (board[2][1] == " X " || board[2][1] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[2][1] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 8:
                        if (board[2][2] == " X " || board[2][2] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[2][2] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    default:
                        validacion1 = false;
                        cout << "Elija algun numero que se da a elegir" << endl;
                        break;
                    }
                } while (validacion1 == false);
                //
                cout << "Jugador numero 2 (O), en donde desea agregar la O?" << endl;
                do
                {
                    cin >> colocacion; // Se le pide al jugador uno la ubicacion donde quiere poner su caracter
                    cout << endl;
                    switch (colocacion)
                    {
                    case 0:
                        if (board[0][0] == " X " || board[0][0] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[0][0] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 1:
                        if (board[0][1] == " X " || board[0][1] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[0][1] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 2:
                        if (board[0][2] == " X " || board[0][2] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[0][2] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 3:
                        if (board[1][0] == " X " || board[1][0] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[1][0] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 4:
                        if (board[1][1] == " X " || board[1][1] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[1][1] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 5:
                        if (board[1][2] == " X " || board[1][2] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[1][2] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 6:
                        if (board[2][0] == " X " || board[2][0] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[2][0] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 7:
                        if (board[2][1] == " X " || board[2][1] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[2][1] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 8:
                        if (board[2][2] == " X " || board[2][2] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[2][2] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    default:
                        validacion1 = false;
                        cout << "Elija algun numero que se da a elegir" << endl;
                        break;
                    }
                } while (validacion1 == false);
            } while (colocacion > 0 || colocacion < 9);
        }
        else if (empezar == 2) // if por si se decide que va a empezar el jugador dos (O)
        {
            cout << "A continuacion se le va a mostrar el tablero" << endl << endl;
            for (int i = 0; i < ROWS; i++) // ciclo for para crear la tabla donde posteriormente se pondran caracteres
            {
                for (int j = 0; j < COLUMNS; j++)
                {
                    cout << board[i][j];
                }
                cout << endl << endl;
            }
            do // ciclo do-while que se va a repetir para que los jugadores coloquen los caracteres en todos los espacios
            {
                cout << "Jugador numero 2 (O), en donde desea agregar la O?" << endl;
                do
                {
                    cin >> colocacion; // Se le pide al jugador uno la ubicacion donde quiere poner su caracter
                    cout << endl;
                    switch (colocacion)
                    {
                    case 0:
                        if (board[0][0] == " X " || board[0][0] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[0][0] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 1:
                        if (board[0][1] == " X " || board[0][1] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[0][1] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 2:
                        if (board[0][2] == " X " || board[0][2] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[0][2] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 3:
                        if (board[1][0] == " X " || board[1][0] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[1][0] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 4:
                        if (board[1][1] == " X " || board[1][1] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[1][1] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 5:
                        if (board[1][2] == " X " || board[1][2] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[1][2] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 6:
                        if (board[2][0] == " X " || board[2][0] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[2][0] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 7:
                        if (board[2][1] == " X " || board[2][1] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[2][1] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 8:
                        if (board[2][2] == " X " || board[2][2] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[2][2] = " O ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    default:
                        validacion1 = false;
                        cout << "Elija algun numero que se da a elegir" << endl;
                        break;
                    }
                } while (validacion1 == false);
                //
                cout << "Jugador numero 1 (X), en donde desea agregar la X?" << endl;
                do
                {
                    cin >> colocacion; // Se le pide al jugador uno la ubicacion donde quiere poner su caracter
                    cout << endl;
                    switch (colocacion)
                    {
                    case 0:
                        if (board[0][0] == " X " || board[0][0] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[0][0] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 1:
                        if (board[0][1] == " X " || board[0][1] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[0][1] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 2:
                        if (board[0][2] == " X " || board[0][2] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[0][2] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 3:
                        if (board[1][0] == " X " || board[1][0] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[1][0] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 4:
                        if (board[1][1] == " X " || board[1][1] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[1][1] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 5:
                        if (board[1][2] == " X " || board[1][2] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[1][2] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 6:
                        if (board[2][0] == " X " || board[2][0] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[2][0] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 7:
                        if (board[2][1] == " X " || board[2][1] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[2][1] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    case 8:
                        if (board[2][2] == " X " || board[2][2] == " O ")
                        {
                            validacion1 = false;
                            cout << "Ese espacio ya está ocupado" << endl;
                        }
                        else
                        {
                            validacion1 = true;
                            board[2][2] = " X ";
                            for (int i = 0; i < ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS; j++)
                                {
                                    cout << board[i][j];
                                }
                                cout << endl << endl;
                            }
                        }
                        break;
                    default:
                        validacion1 = false;
                        cout << "Elija algun numero que se da a elegir" << endl;
                        break;
                    }
                } while (validacion1 == false);
            } while (colocacion > 0 || colocacion < 9);
        }
        else
        {
            cout << "Elija que jugador va a comenzar" << endl;
        }
    } while (empezar > 2);
}