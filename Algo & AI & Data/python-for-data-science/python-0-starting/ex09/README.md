# A sample test package

Create your first package in python the way you want, it will appear in the list of
installed packages when you type the command `pip list` and display its characteristics
when you type `pip show -v ft_package`

## Installation

```
python3 setup.py sdist bdist_wheel
pip install ./dist/ft_package-0.0.1.tar.gz
```

## Show package information

```
pip show -v ft_package
```

## Test case

```
python3 tests/tester.py
```

## Uninstall

```
pip uninstall -y ft_package
```

## Remove cache

```
find * -type d -name "*__pycache__*" -exec rm -rfv {} \; || true
rm -rfv build dist ft_package.egg-info
```
