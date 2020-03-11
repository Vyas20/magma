#!/usr/bin/env python3
# @generated AUTOGENERATED file. Do not Change!

from dataclasses import dataclass
from datetime import datetime
from gql.gql.datetime_utils import DATETIME_FIELD
from gql.gql.graphql_client import GraphqlClient
from functools import partial
from numbers import Number
from typing import Any, Callable, List, Mapping, Optional

from dataclasses_json import DataClassJsonMixin

from gql.gql.enum_utils import enum_field
from .property_kind_enum import PropertyKind


@dataclass
class EquipmentPortTypesQuery(DataClassJsonMixin):
    @dataclass
    class EquipmentPortTypesQueryData(DataClassJsonMixin):
        @dataclass
        class EquipmentPortTypeConnection(DataClassJsonMixin):
            @dataclass
            class EquipmentPortTypeEdge(DataClassJsonMixin):
                @dataclass
                class EquipmentPortType(DataClassJsonMixin):
                    @dataclass
                    class PropertyType(DataClassJsonMixin):
                        id: str
                        name: str
                        type: PropertyKind = enum_field(PropertyKind)
                        index: Optional[int] = None
                        stringValue: Optional[str] = None
                        intValue: Optional[int] = None
                        booleanValue: Optional[bool] = None
                        floatValue: Optional[Number] = None
                        latitudeValue: Optional[Number] = None
                        longitudeValue: Optional[Number] = None
                        isEditable: Optional[bool] = None
                        isInstanceProperty: Optional[bool] = None

                    id: str
                    name: str
                    propertyTypes: List[PropertyType]
                    linkPropertyTypes: List[PropertyType]

                node: Optional[EquipmentPortType] = None

            edges: List[EquipmentPortTypeEdge]

        equipmentPortTypes: EquipmentPortTypeConnection

    data: EquipmentPortTypesQueryData

    __QUERY__: str = """
    query EquipmentPortTypesQuery {
  equipmentPortTypes {
    edges {
      node {
        id
        name
        propertyTypes {
          id
          name
          type
          index
          stringValue
          intValue
          booleanValue
          floatValue
          latitudeValue
          longitudeValue
          isEditable
          isInstanceProperty
        }
        linkPropertyTypes {
          id
          name
          type
          index
          stringValue
          intValue
          booleanValue
          floatValue
          latitudeValue
          longitudeValue
          isEditable
          isInstanceProperty
        }
      }
    }
  }
}

    """

    @classmethod
    # fmt: off
    def execute(cls, client: GraphqlClient) -> EquipmentPortTypesQueryData:
        # fmt: off
        variables = {}
        response_text = client.call(cls.__QUERY__, variables=variables)
        return cls.from_json(response_text).data
