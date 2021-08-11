#include <fstream>
#include <string>

int
	main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	int				ifsLength;
	char			*buffer;
	std::string		bufferString;
	std::string		ofsName;
	std::string		foo, bar;
	size_t			npos, pos;

	if (argc != 4 || argv[2][0] == '\0' || argv[3][0] == '\0')
		return (-1);
	foo = argv[2];
	bar = argv[3];
	ifs.open(argv[1]);
	if (!ifs)
		return (-1);
	ifs.seekg(0, ifs.end);
	ifsLength = ifs.tellg();
	ifs.seekg(0, ifs.beg);
	buffer = new char[ifsLength];
	ifs.read(buffer, ifsLength);
	bufferString = buffer;
	ifs.close();
	ofsName = argv[1];
	ofsName += ".replace";
	ofs.open(ofsName);
	if ((pos = bufferString.find(foo)) == std::string::npos)
		ofs << bufferString;
	else
	{
		npos = 0;
		do
		{
			ofs << bufferString.substr(npos, pos - npos);
			ofs << bar;
			npos = pos + foo.size();
		}
		while ((pos = bufferString.find(foo, npos)) != std::string::npos);
		ofs << bufferString.substr(npos);
	}
	ofs.close();
	delete[] buffer;
	return (0);
}
