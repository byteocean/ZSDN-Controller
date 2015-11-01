//
// Autogenerated Code. Changes here will be automatically overwritten.
//
// @author Andre Kutzleb
//

#ifndef ZSDN_TOPOLOGYMODULE_H
#define ZSDN_TOPOLOGYMODULE_H

#include <stdint.h>
#include "zmf/MessageType.hpp"

using namespace zmf::data;

namespace topologymodule_topics {

const uint8_t  TOPIC_VAL__FROM = 0x02;
const uint16_t TOPIC_VAL__FROM__TOPOLOGY_MODULE = 0x0006;
const uint8_t  TOPIC_VAL__FROM__TOPOLOGY_MODULE__TOPOLOGY_CHANGED_EVENT = 0x00;
const uint8_t  TOPIC_VAL__REQUEST = 0x03;
const uint16_t TOPIC_VAL__REQUEST__TOPOLOGY_MODULE = 0x0006;
const uint8_t  TOPIC_VAL__REQUEST__TOPOLOGY_MODULE__GET_TOPOLOGY = 0x00;
const uint8_t  TOPIC_VAL__REPLY = 0x04;
const uint16_t TOPIC_VAL__REPLY__TOPOLOGY_MODULE = 0x0006;
const uint8_t  TOPIC_VAL__REPLY__TOPOLOGY_MODULE__GET_TOPOLOGY = 0x00;

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
class TOPOLOGY_MODULE : public AbstractFactory {
public:
TOPOLOGY_MODULE(MessageType &f) : AbstractFactory(f) {id.appendMatch16((uint16_t) TOPIC_VAL__FROM__TOPOLOGY_MODULE); }
class TOPOLOGY_CHANGED_EVENT : public AbstractFactory {
public:
TOPOLOGY_CHANGED_EVENT(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__FROM__TOPOLOGY_MODULE__TOPOLOGY_CHANGED_EVENT); }
};
TOPOLOGY_CHANGED_EVENT topology_changed_event() {return TOPOLOGY_CHANGED_EVENT(id);}
};
FROM() : id() {id.appendMatch8((uint8_t) TOPIC_VAL__FROM); }
TOPOLOGY_MODULE topology_module() {return TOPOLOGY_MODULE(id);}
};

class REQUEST {
private:
MessageType id;
public:
class TOPOLOGY_MODULE : public AbstractFactory {
public:
TOPOLOGY_MODULE(MessageType &f) : AbstractFactory(f) {id.appendMatch16((uint16_t) TOPIC_VAL__REQUEST__TOPOLOGY_MODULE); }
class GET_TOPOLOGY : public AbstractFactory {
public:
GET_TOPOLOGY(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__REQUEST__TOPOLOGY_MODULE__GET_TOPOLOGY); }
};
GET_TOPOLOGY get_topology() {return GET_TOPOLOGY(id);}
};
REQUEST() : id() {id.appendMatch8((uint8_t) TOPIC_VAL__REQUEST); }
TOPOLOGY_MODULE topology_module() {return TOPOLOGY_MODULE(id);}
};

class REPLY {
private:
MessageType id;
public:
class TOPOLOGY_MODULE : public AbstractFactory {
public:
TOPOLOGY_MODULE(MessageType &f) : AbstractFactory(f) {id.appendMatch16((uint16_t) TOPIC_VAL__REPLY__TOPOLOGY_MODULE); }
class GET_TOPOLOGY : public AbstractFactory {
public:
GET_TOPOLOGY(MessageType &f) : AbstractFactory(f) {id.appendMatch8((uint8_t) TOPIC_VAL__REPLY__TOPOLOGY_MODULE__GET_TOPOLOGY); }
};
GET_TOPOLOGY get_topology() {return GET_TOPOLOGY(id);}
};
REPLY() : id() {id.appendMatch8((uint8_t) TOPIC_VAL__REPLY); }
TOPOLOGY_MODULE topology_module() {return TOPOLOGY_MODULE(id);}
};


} // namespace topologymodule_topics

#endif //ZSDN_TOPOLOGYMODULE_H