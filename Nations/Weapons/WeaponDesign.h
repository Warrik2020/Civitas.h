#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponDesign : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponDesign(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponDesign") {}
    public:
        void Invalidate() const { Call("Invalidate", nullptr, 0); }
        void* Clone() const { return Call("Clone", nullptr, 0); }
        bool SameDrawingAs(void* o) const { void* __callArgs[] = { o }; return CallValue<bool>("SameDrawingAs", __callArgs, 1); }
        void* First(int kind) const { void* __callArgs[] = { &kind }; return Call("First", __callArgs, 1); }
        int Count(int kind) const { void* __callArgs[] = { &kind }; return CallValue<int>("Count", __callArgs, 1); }
        bool Has(int kind) const { void* __callArgs[] = { &kind }; return CallValue<bool>("Has", __callArgs, 1); }
        int ChoiceCount() const { return ReadStaticField<int>("ChoiceCount"); }
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
        int domain() const { return ReadField<int>("domain"); }
        void domain(int value) const { WriteField<int>("domain", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int gunKind() const { return ReadField<int>("gunKind"); }
        void gunKind(int value) const { WriteField<int>("gunKind", value); }
        float calibreMm() const { return ReadField<float>("calibreMm"); }
        void calibreMm(float value) const { WriteField<float>("calibreMm", value); }
        float widthMm() const { return ReadField<float>("widthMm"); }
        void widthMm(float value) const { WriteField<float>("widthMm", value); }
        void* choices() const { return ReadField<void*>("choices"); }
        void choices(void* value) const { WriteField<void*>("choices", value); }
        float beltRounds() const { return ReadField<float>("beltRounds"); }
        void beltRounds(float value) const { WriteField<float>("beltRounds", value); }
        int makerNationId() const { return ReadField<int>("makerNationId"); }
        void makerNationId(int value) const { WriteField<int>("makerNationId", value); }
        int sourceDesignId() const { return ReadField<int>("sourceDesignId"); }
        void sourceDesignId(int value) const { WriteField<int>("sourceDesignId", value); }
        int inheritedFromNationId() const { return ReadField<int>("inheritedFromNationId"); }
        void inheritedFromNationId(int value) const { WriteField<int>("inheritedFromNationId", value); }
        bool archived() const { return ReadField<bool>("archived"); }
        void archived(bool value) const { WriteField<bool>("archived", value); }
        void* parts() const { return ReadField<void*>("parts"); }
        void parts(void* value) const { WriteField<void*>("parts", value); }
        int ResourceNeedsCache() const { return ReadField<int>("ResourceNeedsCache"); }
        void ResourceNeedsCache(int value) const { WriteField<int>("ResourceNeedsCache", value); }
    };
}
