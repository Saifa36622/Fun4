from setuptools import find_packages
from setuptools import setup

setup(
    name='fun4',
    version='0.0.0',
    packages=find_packages(
        include=('fun4', 'fun4.*')),
)
