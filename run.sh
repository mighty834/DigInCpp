#!/bin/zsh
fileName=$1
resultFileName=${fileName:0:-2}
argsString=""
resultDir="./compiled/"

for val in $@
do
    if [[ $val == $1 ]]
    then
        continue;
    else
        argsString="$argsString$val "
    fi
done

args=($(echo $argsString | tr ";" " "));

function compile {
    if ! [ -d $resultDir ]
    then
        mkdir $resultDir
    fi

    g++ $fileName -o $resultDir/$resultFileName
}

function run {
    ./$resultDir/$resultFileName $*
}

compile
run $args
