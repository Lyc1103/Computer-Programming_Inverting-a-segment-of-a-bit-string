# Inverting-a-segment-of-a-bit-string

> Author : Ya Chen<br>
> Date : 2021 / 4 / 1<br>
> List :
>
> > <a href = "#description">Description</a><br><a href = "#examples">Examples</a>

---

<div id = "description">

## Description

Write a function `invert(x , p , n)` that returns xx with the nn bits that begin at position pp inverted ( i.e., 11 change into 00 and vice versa), leaving the others unchanged.<br>
Note that the position starts with 0 from the most siginificant bit of xx.<br>
For example, with `x = 10`, `p = 0`, `n = 1`, we can first write down xx in binary form.

```
1010
^
```

The mask start at 3<sup>th</sup> bit, denoted by the arrow above.<br>
From this position, we invert 1 bit, so the result is

```
0010
```

which is `2`, this is the answer.

</div>
<br>
<br>
<div id = "examples">

## Examples

### Input 1

```
10 0 1
```

### Output 1

```
2
```

<br>

### Input 2

```
2147483647 3 5
```

### Output 2

```
18874367992
```

<br>

### Input 3

```
65535 15 1
```

### Output 3

```
65534
```

<br>

### Input 4

```
35 3 0
```

### Output 4

```
35
```

</div>
