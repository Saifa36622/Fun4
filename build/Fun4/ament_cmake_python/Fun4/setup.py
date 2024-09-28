from setuptools import find_packages
from setuptools import setup

setup(
    name='Fun4',
    version='0.0.0',
    packages=find_packages(
        include=('Fun4', 'Fun4.*')),
)
