// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>
#include <memory>
static uint8_t cmd[] = {0x01, 0x02, 0x03, 0x10};
static std::vector<uint8_t> input_cmd(cmd, cmd + sizeof(cmd) / sizeof(uint8_t));

class str_command
{
  public:
    str_command(size_t size)
    {
        cmd.resize(size);
    }
    ~str_command()
    {
        std::cout << "CMD Destroyed" << std::endl;
    }
    std::vector<uint8_t> get_cmd()
    {
        return cmd;
    }
    int get_cmd_id()
    {
        return cmd[3];
    }

    size_t set_cmd(std::vector<uint8_t> &input)
    {
        cmd = input;
        return cmd.size();
    }

  private:
    std::vector<uint8_t> cmd;
};

std::unique_ptr<str_command> get_command()
{
    std::unique_ptr<str_command> str_cmd(new str_command(4));

    int ret = str_cmd->set_cmd(input_cmd);
    std::cout << "ret = " << ret << std::endl;
    return std::move(str_cmd);
}

int main()
{
    std::vector<uint8_t> str_cmd_02(10, 0x02);
    std::unique_ptr<str_command> cmd_01 = get_command();
    std::cout << "cmd_01->set() = " << cmd_01->set_cmd(str_cmd_02) << std::endl;
    cmd_01.reset();
    if (cmd_01 == nullptr)
        std::cout << "cmd_01 is empty" << std::endl;
    else
        std::cout << "cmd_01->get_cmd_id() = " << cmd_01->get_cmd_id() << std::endl;

    return 0;
}
