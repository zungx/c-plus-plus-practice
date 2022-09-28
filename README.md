# C++ learning

### Setting vscode build

```
"code-runner.executorMap": {
    "cpp": "cd $dir && cd bin && g++ -std=c++11 ../$fileName -o $fileNameWithoutExt && $dir/bin/$fileNameWithoutExt",
```