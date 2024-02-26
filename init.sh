#!/bin/bash

python -m venv venv

echo "virtual env created"

echo "to install poetry and install depencies"

source venv/bin/activate && pip install poetry && poetry install  --no-root

echo "activate the virtual env with source venv/bin/activate "