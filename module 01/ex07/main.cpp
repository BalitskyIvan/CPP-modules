#include <fstream>
#include <iostream>
#include <sstream>

static std::string replaceInLine(std::string line, std::string toReplace,
                          std::string replacement)
{
    std::size_t needlePosition = line.find(toReplace);

    for (int i = 1; needlePosition != std::string::npos; i++)
    {
        line.replace(needlePosition, toReplace.size(), replacement);
        needlePosition = line.find(toReplace.c_str(), needlePosition +
                                                          replacement.size(),
                                   toReplace.size());
    }
    return (line);
}

int main(int argc, char **argv) {
    if (argc == 4)
    {
      std::ifstream file(argv[1]);
      if (file.is_open())
      {
        std::stringstream filename;
        std::string line;
        filename << argv[1] << ".replace";
        std::ofstream newFile(filename.str().c_str());
        if (newFile.is_open())
        {
          while (std::getline(file, line))
          {
            newFile << replaceInLine(line, argv[2], argv[3]) << std::endl;
          }
          newFile.close();
          file.close();
        } else
          std::cout << "Error:\nCan't create file" << std::endl;
      } else
        std::cout << "Error:\nCan't open file" << std::endl;
    } else
     std::cout << "Error:\nWrong number of arguments" << std::endl;
    return 0;
}
