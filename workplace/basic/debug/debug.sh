CURRENT=$(cd $(dirname $0);pwd)
DEBUG=$CURRENT"";
cd $DEBUG;
ESC=$(printf '\033');
printf "${ESC}[31m%s${ESC}[m\n" '---C++ Compile---';
docker exec -it gcc_training g++ workplace/basic/src/03_switch_pointer.cpp -o debug
# printf "${ESC}[33m%s${ESC}[m\n" '---Input---';
# echo $(<sample_input.txt);
printf "${ESC}[33m%s${ESC}[m\n" '---Output---';
# docker exec -i gcc time -p ./debug < sample_input.txt;
docker exec -i gcc_training time -p ./debug;