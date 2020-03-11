#!/usr/bin/env python3
# @generated AUTOGENERATED file. Do not Change!

from dataclasses import dataclass
from datetime import datetime
from functools import partial
from gql.gql.datetime_utils import DATETIME_FIELD
from numbers import Number
from typing import Any, Callable, List, Mapping, Optional

from dataclasses_json import DataClassJsonMixin

from gql.gql.enum_utils import enum_field
from .survey_question_type_enum import SurveyQuestionType

@dataclass
class SurveyTemplateQuestionInput(DataClassJsonMixin):
    questionTitle: str
    questionDescription: str
    questionType: SurveyQuestionType = enum_field(SurveyQuestionType)
    index: int
    id: Optional[str] = None

