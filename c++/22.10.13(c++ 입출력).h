#include <iostream>

// auto�� �Ű� ������ ����� �Ұ���
/*
void Function()
{

}
*/

// Ŭ����
// Ư�� ��ü�� �Ӽ��� ����� ������ ����ü
class Player
{
    // ���� ������
    // Ŭ���� �ܺο��� ���� ���� ���(����,�Լ�)�� Ŭ���� �ܺο��� ������
    // ������ �ʴ� ���(����,�Լ�)��  �����ϴ� ������

    // ���� ������

    // public : Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���� �׸���
    //          Ŭ���� �ܺο��� ������ ����� �� �ִ� ������

    // private : Ŭ���� ���ο����� ������ ���ǰ�, �ڱⰡ ����ϴ� Ŭ������
    //           Ŭ���� �ܺο��� ������ �� ���� ������

    // protected : Ŭ���� ���ο� �ڱⰡ ����ϴ� Ŭ���������� ������ ����ϰ�
    //             Ŭ���� �ܺο����� ������ �� �� ���� ������

    // Ŭ������ ��� ���� �����ڸ� ������ ������ �⺻������ private�� ����

    // private ����
    /*
    void ATTACK()
    {
        std::cout << "����" << std::endl;
    }
    */

public:
    int health = 100;
    float size = 3.65;
    std::string name = "musat";

private:

    void ATTACK()
    {
        std::cout << "����" << std::endl;
    }
};


int main()
{

    // bool = ���� ������ ��Ÿ���� �ڷ���
    // bool value = true;

    // ���� ��� for��
    /*
    // ���۰� ������ �˷����� �ʾƵ� ũ�⿡ ���� ������ ��ȸ���ִ� �ݺ���

    int array[] = { 1,2,3,4,5 };

    // element : ���� �̸�
    // array : ������ ����Ʈ (�迭, ����, ����Ʈ)

    for (int element : array )
    {
        // ���� ���  for�� ����
        // 1. for�� ������ index ������ �������� �ʴ´� (index = 1,2,3,4,5 ���� �ϳ��� ����)
        // 2. for�� �ȿ��� �迭�� ��Ҹ� ������ �� ����

        // ���� ������ ���·� ������Ű�� ���� ���� element += 1;
        // �迭 �ȿ� �ִ� ���� ��ü �ʱ�ȭ�� ���� element = 10;

        element = 10;

        // element : call by value ���·� ���� �Ѱ��ش�
        std::cout << element << std::endl;

    }
    std::cout << "=========" << std::endl;

    for (int element : array)
    {

        std::cout << element << std::endl;

    }
    */

    // �ڷ��� �߷�
    /*
    // ������ �Լ��� �����ϰ� ������ �̷���� �� �����Ϸ��� �ڵ����� �ڷ�����
    // �߷����ִ� ���

    auto value = 10;
    auto decimal = 20.6;

    std::cout << "value ������ ��: " << value << std::endl;
    std::cout << "decimal ������ �� : " << decimal << std::endl;
    */

    // Ŭ���� 
    Player unk;


    std::cout << unk.health << " " << unk.size << " " << unk.name << std::endl;

    return 0;
}


