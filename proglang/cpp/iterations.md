### forward iteration
```
for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
{
    std::cout << *it;
}
```

### backward iteration
```
for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it)
{
    std::cout << *it;
}
```

### both sided iteration
```
auto rt = v.end();
for (auto it = v.begin(); it < rt; it++, rt--)
{
    std::cout << *it << " " << *rt;
}
```

In C++ 11, you can just use `auto` for the iterator declarations.
