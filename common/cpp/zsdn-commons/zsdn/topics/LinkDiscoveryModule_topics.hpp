//
// Autogenerated Code. Changes here will be automatically overwritten.
//
// @author Andre Kutzleb
//

#ifndef ZSDN_LINKDISCOVERYMODULE_H
#define ZSDN_LINKDISCOVERYMODULE_H

#include <stdint.h>
#include "zmf/MessageType.hpp"

using namespace zmf::data;

namespace linkdiscoverymodule_topics {

const uint8_t  TOPIC_VAL__FROM = 0x02;
const uint16_t TOPIC_VAL__FROM__LINK_DISCOVERY_MODULE = 0x0005;
const uint8_t  TOPIC_VAL__FROM__LINK_DISCOVERY_MODULE__SWITCH_LINK_EVENT = 0x00;
const uint8_t  TOPIC_VAL__FROM__LINK_DISCOVERY_MODULE__SWITCH_LINK_EVENT__ADDED = 0x00;
const uint8_t  TOPIC_VAL__FROM__LINK_DISCOVERY_MODULE__SWITCH_LINK_EVENT__REMOVED = 0x01;
const uint8_t  TOPIC_VAL__REQUEST = 0x03;
const uint16_t TOPIC_VAL__REQUEST__LINK_DISCOVERY_MODULE = 0x0005;
const uint8_t  TOPIC_VAL__REQUEST__LINK_DISCOVERY_MODULE__GET_ALL_SWITCH_LINKS = 0x00;
const uint8_t  TOPIC_VAL__REQUEST__LINK_DISCOVERY_MODULE__GET_LINKS_FROM_SWITCH = 0x01;
const uint8_t  TOPIC_VAL__REQUEST__LINK_DISCOVERY_MODULE__GET_LINKS_TO_SWITCH = 0x02;
const uint8_t  TOPIC_VAL__REQUEST__LINK_DISCOVERY_MODULE__GET_ALL_LINKS_OF_SWITCH = 0x03;
const uint8_t  TOPIC_VAL__REQUEST__LINK_DISCOVERY_MODULE__GET_LINKS_BETWEEN_TWO_SWITCHES = 0x04;
const uint8_t  TOPIC_VAL__REPLY = 0x04;
const uint16_t TOPIC_VAL__REPLY__LINK_DISCOVERY_MODULE = 0x0005;
const uint8_t  TOPIC_VAL__REPLY__LINK_DISCOVERY_MODULE__GET_ALL_SWITCH_LINKS = 0x00;
const uint8_t  TOPIC_VAL__REPLY__LINK_DISCOVERY_MODULE__GET_LINKS_FROM_SWITCH = 0x01;
const uint8_t  TOPIC_VAL__REPLY__LINK_DISCOVERY_MODULE__GET_LINKS_TO_SWITCH = 0x02;
const uint8_t  TOPIC_VAL__REPLY__LINK_DISCOVERY_MODULE__GET_ALL_LINKS_OF_SWITCH = 0x03;
const uint8_t  TOPIC_VAL__REPLY__LINK_DISCOVERY_MODULE__GET_LINKS_BETWEEN_TWO_SWITCHES = 0x04;

class AbstractFactory {
protected:
MessageType& id;
AbstractFactory(MessageType &f) : id(f) {}
public:
MessageType build() {return id;}
};

class FROM {
private:
MessageType id;
public:
class LINK_DISCOVERY_MODULE : public AbstractFactory {
public:
LINK_DISCOVERY_MODULE(MessageType &f) : AbstractFactory(f) {id.appendMatch16((uint16_t) TOPIC_VAL__FROM__LINK_DISCOVERY_MODULE); }
class SWITCH_LINK_EVENT : public AbstractFactory {
public:
SWITCH_LINK_EVENT(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__FROM__LINK_DISCOVERY_MODULE__SWITCH_LINK_EVENT); }
class ADDED : public AbstractFactory {
public:
ADDED(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__FROM__LINK_DISCOVERY_MODULE__SWITCH_LINK_EVENT__ADDED); }
};
class REMOVED : public AbstractFactory {
public:
REMOVED(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__FROM__LINK_DISCOVERY_MODULE__SWITCH_LINK_EVENT__REMOVED); }
};
ADDED added() {return ADDED(id);}
REMOVED removed() {return REMOVED(id);}
};
SWITCH_LINK_EVENT switch_link_event() {return SWITCH_LINK_EVENT(id);}
};
FROM() : id() {id.appendMatch8((uint8_t) TOPIC_VAL__FROM); }
LINK_DISCOVERY_MODULE link_discovery_module() {return LINK_DISCOVERY_MODULE(id);}
};

class REQUEST {
private:
MessageType id;
public:
class LINK_DISCOVERY_MODULE : public AbstractFactory {
public:
LINK_DISCOVERY_MODULE(MessageType &f) : AbstractFactory(f) {id.appendMatch16((uint16_t) TOPIC_VAL__REQUEST__LINK_DISCOVERY_MODULE); }
class GET_ALL_SWITCH_LINKS : public AbstractFactory {
public:
GET_ALL_SWITCH_LINKS(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__REQUEST__LINK_DISCOVERY_MODULE__GET_ALL_SWITCH_LINKS); }
};
class GET_LINKS_FROM_SWITCH : public AbstractFactory {
public:
GET_LINKS_FROM_SWITCH(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__REQUEST__LINK_DISCOVERY_MODULE__GET_LINKS_FROM_SWITCH); }
};
class GET_LINKS_TO_SWITCH : public AbstractFactory {
public:
GET_LINKS_TO_SWITCH(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__REQUEST__LINK_DISCOVERY_MODULE__GET_LINKS_TO_SWITCH); }
};
class GET_ALL_LINKS_OF_SWITCH : public AbstractFactory {
public:
GET_ALL_LINKS_OF_SWITCH(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__REQUEST__LINK_DISCOVERY_MODULE__GET_ALL_LINKS_OF_SWITCH); }
};
class GET_LINKS_BETWEEN_TWO_SWITCHES : public AbstractFactory {
public:
GET_LINKS_BETWEEN_TWO_SWITCHES(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__REQUEST__LINK_DISCOVERY_MODULE__GET_LINKS_BETWEEN_TWO_SWITCHES); }
};
GET_ALL_SWITCH_LINKS get_all_switch_links() {return GET_ALL_SWITCH_LINKS(id);}
GET_LINKS_FROM_SWITCH get_links_from_switch() {return GET_LINKS_FROM_SWITCH(id);}
GET_LINKS_TO_SWITCH get_links_to_switch() {return GET_LINKS_TO_SWITCH(id);}
GET_ALL_LINKS_OF_SWITCH get_all_links_of_switch() {return GET_ALL_LINKS_OF_SWITCH(id);}
GET_LINKS_BETWEEN_TWO_SWITCHES get_links_between_two_switches() {return GET_LINKS_BETWEEN_TWO_SWITCHES(id);}
};
REQUEST() : id() {id.appendMatch8((uint8_t) TOPIC_VAL__REQUEST); }
LINK_DISCOVERY_MODULE link_discovery_module() {return LINK_DISCOVERY_MODULE(id);}
};

class REPLY {
private:
MessageType id;
public:
class LINK_DISCOVERY_MODULE : public AbstractFactory {
public:
LINK_DISCOVERY_MODULE(MessageType &f) : AbstractFactory(f) {id.appendMatch16((uint16_t) TOPIC_VAL__REPLY__LINK_DISCOVERY_MODULE); }
class GET_ALL_SWITCH_LINKS : public AbstractFactory {
public:
GET_ALL_SWITCH_LINKS(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__REPLY__LINK_DISCOVERY_MODULE__GET_ALL_SWITCH_LINKS); }
};
class GET_LINKS_FROM_SWITCH : public AbstractFactory {
public:
GET_LINKS_FROM_SWITCH(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__REPLY__LINK_DISCOVERY_MODULE__GET_LINKS_FROM_SWITCH); }
};
class GET_LINKS_TO_SWITCH : public AbstractFactory {
public:
GET_LINKS_TO_SWITCH(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__REPLY__LINK_DISCOVERY_MODULE__GET_LINKS_TO_SWITCH); }
};
class GET_ALL_LINKS_OF_SWITCH : public AbstractFactory {
public:
GET_ALL_LINKS_OF_SWITCH(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__REPLY__LINK_DISCOVERY_MODULE__GET_ALL_LINKS_OF_SWITCH); }
};
class GET_LINKS_BETWEEN_TWO_SWITCHES : public AbstractFactory {
public:
GET_LINKS_BETWEEN_TWO_SWITCHES(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__REPLY__LINK_DISCOVERY_MODULE__GET_LINKS_BETWEEN_TWO_SWITCHES); }
};
GET_ALL_SWITCH_LINKS get_all_switch_links() {return GET_ALL_SWITCH_LINKS(id);}
GET_LINKS_FROM_SWITCH get_links_from_switch() {return GET_LINKS_FROM_SWITCH(id);}
GET_LINKS_TO_SWITCH get_links_to_switch() {return GET_LINKS_TO_SWITCH(id);}
GET_ALL_LINKS_OF_SWITCH get_all_links_of_switch() {return GET_ALL_LINKS_OF_SWITCH(id);}
GET_LINKS_BETWEEN_TWO_SWITCHES get_links_between_two_switches() {return GET_LINKS_BETWEEN_TWO_SWITCHES(id);}
};
REPLY() : id() {id.appendMatch8((uint8_t) TOPIC_VAL__REPLY); }
LINK_DISCOVERY_MODULE link_discovery_module() {return LINK_DISCOVERY_MODULE(id);}
};


} // namespace linkdiscoverymodule_topics

#endif //ZSDN_LINKDISCOVERYMODULE_H
