# buck-custom-flavours 😋

Example of how build flavours can be used to implement `release` and `debug` targets in Buck. The meat of the example is in `.buckconfig`. 

To build for release: 

```
buck run :hello
```

To build for debug: 

```bash=
buck run :hello#debug
```
