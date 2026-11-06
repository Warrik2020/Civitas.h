#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerWeaponDesign : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerWeaponDesign(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerWeaponDesign") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        void* uid() const { return ReadField<void*>("uid"); }
        void uid(void* value) const { WriteField<void*>("uid", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        void* presetKey() const { return ReadField<void*>("presetKey"); }
        void presetKey(void* value) const { WriteField<void*>("presetKey", value); }
        int year() const { return ReadField<int>("year"); }
        void year(int value) const { WriteField<int>("year", value); }
        float calibreMm() const { return ReadField<float>("calibreMm"); }
        void calibreMm(float value) const { WriteField<float>("calibreMm", value); }
        int domain() const { return ReadField<int>("domain"); }
        void domain(int value) const { WriteField<int>("domain", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int gunKind() const { return ReadField<int>("gunKind"); }
        void gunKind(int value) const { WriteField<int>("gunKind", value); }
        float widthMm() const { return ReadField<float>("widthMm"); }
        void widthMm(float value) const { WriteField<float>("widthMm", value); }
        void* choices() const { return ReadField<void*>("choices"); }
        void choices(void* value) const { WriteField<void*>("choices", value); }
        int ignition() const { return ReadField<int>("ignition"); }
        void ignition(int value) const { WriteField<int>("ignition", value); }
        int action() const { return ReadField<int>("action"); }
        void action(int value) const { WriteField<int>("action", value); }
        int fireMode() const { return ReadField<int>("fireMode"); }
        void fireMode(int value) const { WriteField<int>("fireMode", value); }
        int feed() const { return ReadField<int>("feed"); }
        void feed(int value) const { WriteField<int>("feed", value); }
        int ammunition() const { return ReadField<int>("ammunition"); }
        void ammunition(int value) const { WriteField<int>("ammunition", value); }
        int propellant() const { return ReadField<int>("propellant"); }
        void propellant(int value) const { WriteField<int>("propellant", value); }
        int bore() const { return ReadField<int>("bore"); }
        void bore(int value) const { WriteField<int>("bore", value); }
        int manufacture() const { return ReadField<int>("manufacture"); }
        void manufacture(int value) const { WriteField<int>("manufacture", value); }
        int sight() const { return ReadField<int>("sight"); }
        void sight(int value) const { WriteField<int>("sight", value); }
        int cooling() const { return ReadField<int>("cooling"); }
        void cooling(int value) const { WriteField<int>("cooling", value); }
        float beltRounds() const { return ReadField<float>("beltRounds"); }
        void beltRounds(float value) const { WriteField<float>("beltRounds", value); }
        void* parts() const { return ReadField<void*>("parts"); }
        void parts(void* value) const { WriteField<void*>("parts", value); }
        int anatomy() const { return ReadField<int>("anatomy"); }
        void anatomy(int value) const { WriteField<int>("anatomy", value); }
        int makerNationId() const { return ReadField<int>("makerNationId"); }
        void makerNationId(int value) const { WriteField<int>("makerNationId", value); }
        int sourceDesignId() const { return ReadField<int>("sourceDesignId"); }
        void sourceDesignId(int value) const { WriteField<int>("sourceDesignId", value); }
        bool archived() const { return ReadField<bool>("archived"); }
        void archived(bool value) const { WriteField<bool>("archived", value); }
        int inheritedFromNationId() const { return ReadField<int>("inheritedFromNationId"); }
        void inheritedFromNationId(int value) const { WriteField<int>("inheritedFromNationId", value); }
    };
}
