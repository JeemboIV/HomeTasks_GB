#include <iostream>

using namespace std;

//HomeTask 2. Point 4. Создать структуру для игрового поля игры в "Крестики-нолики" и снабдить её всеми нужными свойствами.
struct GameBoard {

    //HomeTask 2. Point 2. Создание перечисления с состояниями ячеек игровой доски. 
    enum CellState
    {
        X,
        O,
        E           //Empty
    };

    //HomeTask 2. Point 3. Создание массива, способного хранить значения перечисления CellState.
    CellState GameTable[3][3] = {
    {X, E, E},
    {E, O, E},
    {E, E, E}
    };

    //содержит значение из CellState, чтобы игрок мог выбрать, какой фигурой (O или X) играть.
    CellState figureRealPlayer;

    //Символьный массив для хранения имени реального игрока.
    char realPlayerName[32];

    //Булевый флаг, в значении true указывающий на ничью.
    bool FriendshipWon;

    //Булевый флаг, в значении True - Игра закончена, можно проверять, какой игрок победил.
    bool EndGame;
};

int main()
{
    GameBoard board;

    board.GameTable[0][2] = board.CellState::O;

    //На всякий случай вывел массив в консоль, чтобы убедиться, что там всё в порядке,
    //результатом вывода будет не символ(X,O,E), а индекс символа из перечиления CellState(0,1,2).
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board.GameTable[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
