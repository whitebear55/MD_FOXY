from setuptools import find_packages
from setuptools import setup

setup(
    name='md',
    version='0.0.0',
    packages=find_packages(
        include=('md', 'md.*')),
)
