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
        void SetId(int value) const { WriteField<int>("id", value); }
        void* uid() const { return ReadField<void*>("uid"); }
        void SetUid(void* value) const { WriteField<void*>("uid", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* presetKey() const { return ReadField<void*>("presetKey"); }
        void SetPresetKey(void* value) const { WriteField<void*>("presetKey", value); }
        int year() const { return ReadField<int>("year"); }
        void SetYear(int value) const { WriteField<int>("year", value); }
        float calibreMm() const { return ReadField<float>("calibreMm"); }
        void SetCalibreMm(float value) const { WriteField<float>("calibreMm", value); }
        int domain() const { return ReadField<int>("domain"); }
        void SetDomain(int value) const { WriteField<int>("domain", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int gunKind() const { return ReadField<int>("gunKind"); }
        void SetGunKind(int value) const { WriteField<int>("gunKind", value); }
        float widthMm() const { return ReadField<float>("widthMm"); }
        void SetWidthMm(float value) const { WriteField<float>("widthMm", value); }
        void* choices() const { return ReadField<void*>("choices"); }
        void SetChoices(void* value) const { WriteField<void*>("choices", value); }
        int ignition() const { return ReadField<int>("ignition"); }
        void SetIgnition(int value) const { WriteField<int>("ignition", value); }
        int action() const { return ReadField<int>("action"); }
        void SetAction(int value) const { WriteField<int>("action", value); }
        int fireMode() const { return ReadField<int>("fireMode"); }
        void SetFireMode(int value) const { WriteField<int>("fireMode", value); }
        int feed() const { return ReadField<int>("feed"); }
        void SetFeed(int value) const { WriteField<int>("feed", value); }
        int ammunition() const { return ReadField<int>("ammunition"); }
        void SetAmmunition(int value) const { WriteField<int>("ammunition", value); }
        int propellant() const { return ReadField<int>("propellant"); }
        void SetPropellant(int value) const { WriteField<int>("propellant", value); }
        int bore() const { return ReadField<int>("bore"); }
        void SetBore(int value) const { WriteField<int>("bore", value); }
        int manufacture() const { return ReadField<int>("manufacture"); }
        void SetManufacture(int value) const { WriteField<int>("manufacture", value); }
        int sight() const { return ReadField<int>("sight"); }
        void SetSight(int value) const { WriteField<int>("sight", value); }
        int cooling() const { return ReadField<int>("cooling"); }
        void SetCooling(int value) const { WriteField<int>("cooling", value); }
        float beltRounds() const { return ReadField<float>("beltRounds"); }
        void SetBeltRounds(float value) const { WriteField<float>("beltRounds", value); }
        void* parts() const { return ReadField<void*>("parts"); }
        void SetParts(void* value) const { WriteField<void*>("parts", value); }
        int anatomy() const { return ReadField<int>("anatomy"); }
        void SetAnatomy(int value) const { WriteField<int>("anatomy", value); }
        int makerNationId() const { return ReadField<int>("makerNationId"); }
        void SetMakerNationId(int value) const { WriteField<int>("makerNationId", value); }
        int sourceDesignId() const { return ReadField<int>("sourceDesignId"); }
        void SetSourceDesignId(int value) const { WriteField<int>("sourceDesignId", value); }
        bool archived() const { return ReadField<bool>("archived"); }
        void SetArchived(bool value) const { WriteField<bool>("archived", value); }
        int inheritedFromNationId() const { return ReadField<int>("inheritedFromNationId"); }
        void SetInheritedFromNationId(int value) const { WriteField<int>("inheritedFromNationId", value); }
    };
}
