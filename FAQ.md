## 逻辑部分

1. **登录栈**允许同一账户同时多次登录。以下情况是允许的。

```
su root sjtu
su root sjtu
```

重复登录时，之前的登录不会被登出。

2. `modify` 时把 ISBN 修改成原来的 ISBN 视为非法操作。例如：

```
su root sjtu
select ISBN1
modify -ISBN=ISBN1
```

是非法的。
