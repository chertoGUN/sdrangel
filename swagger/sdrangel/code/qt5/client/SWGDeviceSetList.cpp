/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 5.1.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGDeviceSetList.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDeviceSetList::SWGDeviceSetList(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDeviceSetList::SWGDeviceSetList() {
    devicesetcount = 0;
    m_devicesetcount_isSet = false;
    devicesetfocus = 0;
    m_devicesetfocus_isSet = false;
    device_sets = nullptr;
    m_device_sets_isSet = false;
}

SWGDeviceSetList::~SWGDeviceSetList() {
    this->cleanup();
}

void
SWGDeviceSetList::init() {
    devicesetcount = 0;
    m_devicesetcount_isSet = false;
    devicesetfocus = 0;
    m_devicesetfocus_isSet = false;
    device_sets = new QList<SWGDeviceSet*>();
    m_device_sets_isSet = false;
}

void
SWGDeviceSetList::cleanup() {


    if(device_sets != nullptr) { 
        auto arr = device_sets;
        for(auto o: *arr) { 
            delete o;
        }
        delete device_sets;
    }
}

SWGDeviceSetList*
SWGDeviceSetList::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDeviceSetList::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&devicesetcount, pJson["devicesetcount"], "qint32", "");
    
    ::SWGSDRangel::setValue(&devicesetfocus, pJson["devicesetfocus"], "qint32", "");
    
    
    ::SWGSDRangel::setValue(&device_sets, pJson["deviceSets"], "QList", "SWGDeviceSet");
}

QString
SWGDeviceSetList::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGDeviceSetList::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_devicesetcount_isSet){
        obj->insert("devicesetcount", QJsonValue(devicesetcount));
    }
    if(m_devicesetfocus_isSet){
        obj->insert("devicesetfocus", QJsonValue(devicesetfocus));
    }
    if(device_sets && device_sets->size() > 0){
        toJsonArray((QList<void*>*)device_sets, obj, "deviceSets", "SWGDeviceSet");
    }

    return obj;
}

qint32
SWGDeviceSetList::getDevicesetcount() {
    return devicesetcount;
}
void
SWGDeviceSetList::setDevicesetcount(qint32 devicesetcount) {
    this->devicesetcount = devicesetcount;
    this->m_devicesetcount_isSet = true;
}

qint32
SWGDeviceSetList::getDevicesetfocus() {
    return devicesetfocus;
}
void
SWGDeviceSetList::setDevicesetfocus(qint32 devicesetfocus) {
    this->devicesetfocus = devicesetfocus;
    this->m_devicesetfocus_isSet = true;
}

QList<SWGDeviceSet*>*
SWGDeviceSetList::getDeviceSets() {
    return device_sets;
}
void
SWGDeviceSetList::setDeviceSets(QList<SWGDeviceSet*>* device_sets) {
    this->device_sets = device_sets;
    this->m_device_sets_isSet = true;
}


bool
SWGDeviceSetList::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_devicesetcount_isSet){
            isObjectUpdated = true; break;
        }
        if(m_devicesetfocus_isSet){
            isObjectUpdated = true; break;
        }
        if(device_sets && (device_sets->size() > 0)){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

