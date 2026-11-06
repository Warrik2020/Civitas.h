#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponCatalog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponCatalog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponCatalog") {}
    public:
        void* O(const char* key, const char* name, const char* blurb, void* techs) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(blurb ? blurb : "") : nullptr; void* __callArgs[] = { managed_0, managed_1, managed_2, techs }; return CallStatic("O", __callArgs, 4); }
        void Check(void* table, void* enumType) const { void* __callArgs[] = { table, enumType }; CallStatic("Check", __callArgs, 2); }
        int Clamp(int v, int count) const { void* __callArgs[] = { &v, &count }; return CallStaticValue<int>("Clamp", __callArgs, 2); }
        bool IsShape(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("IsShape", __callArgs, 1); }
        bool IsShape(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<bool>("IsShape", __callArgs, 1); }
        int RealPartCount(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("RealPartCount", __callArgs, 1); }
        void* Options(int l) const { void* __callArgs[] = { &l }; return CallStatic("Options", __callArgs, 1); }
        void* LadderName(int l) const { void* __callArgs[] = { &l }; return CallStatic("LadderName", __callArgs, 1); }
        int Current(void* d, int l) const { void* __callArgs[] = { d, &l }; return CallStaticValue<int>("Current", __callArgs, 2); }
        void Set(void* d, int l, int index) const { void* __callArgs[] = { d, &l, &index }; CallStatic("Set", __callArgs, 3); }
        void* Option(void* d, int l) const { void* __callArgs[] = { d, &l }; return CallStatic("Option", __callArgs, 2); }
        void* SpecOf(void* d) const { void* __callArgs[] = { d }; return CallStatic("SpecOf", __callArgs, 1); }
        void* OptionsFor(void* d, int ladder) const { void* __callArgs[] = { d, &ladder }; return CallStatic("OptionsFor", __callArgs, 2); }
        void* LadderNameFor(void* d, int ladder) const { void* __callArgs[] = { d, &ladder }; return CallStatic("LadderNameFor", __callArgs, 2); }
        void* LaddersOf(void* d) const { void* __callArgs[] = { d }; return CallStatic("LaddersOf", __callArgs, 1); }
        int LadderCountOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("LadderCountOf", __callArgs, 1); }
        bool HasTopView(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("HasTopView", __callArgs, 1); }
        int CurrentOf(void* d, int ladder) const { void* __callArgs[] = { d, &ladder }; return CallStaticValue<int>("CurrentOf", __callArgs, 2); }
        void SetChoice(void* d, int ladder, int index) const { void* __callArgs[] = { d, &ladder, &index }; CallStatic("SetChoice", __callArgs, 3); }
        void* OptionOf(void* d, int ladder) const { void* __callArgs[] = { d, &ladder }; return CallStatic("OptionOf", __callArgs, 2); }
        void* TechName(int techIndex) const { void* __callArgs[] = { &techIndex }; return CallStatic("TechName", __callArgs, 1); }
        bool Available(void* it, void* o) const { void* __callArgs[] = { it, o }; return CallStaticValue<bool>("Available", __callArgs, 2); }
        void* LockReason(void* it, void* o) const { void* __callArgs[] = { it, o }; return CallStatic("LockReason", __callArgs, 2); }
        void* LockReasonDated(void* it, void* o) const { void* __callArgs[] = { it, o }; return CallStatic("LockReasonDated", __callArgs, 2); }
        void AddLockIssues(void* it, void* d, void* issues) const { void* __callArgs[] = { it, d, issues }; CallStatic("AddLockIssues", __callArgs, 3); }
        bool DesignerUnlocked(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("DesignerUnlocked", __callArgs, 1); }
        void* FirstLock(void* it, void* d) const { void* __callArgs[] = { it, d }; return CallStatic("FirstLock", __callArgs, 2); }
        float DueYear(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("DueYear", __callArgs, 1); }
        void AvailableIndices(void* it, int l, void* into) const { void* __callArgs[] = { it, &l, into }; CallStatic("AvailableIndices", __callArgs, 3); }
        void* Ignitions() const { return ReadStaticField<void*>("Ignitions"); }
        void* Actions() const { return ReadStaticField<void*>("Actions"); }
        void* FireModes() const { return ReadStaticField<void*>("FireModes"); }
        void* Feeds() const { return ReadStaticField<void*>("Feeds"); }
        void* Ammunitions() const { return ReadStaticField<void*>("Ammunitions"); }
        void* Propellants() const { return ReadStaticField<void*>("Propellants"); }
        void* Bores() const { return ReadStaticField<void*>("Bores"); }
        void* Materials() const { return ReadStaticField<void*>("Materials"); }
        void* Manufactures() const { return ReadStaticField<void*>("Manufactures"); }
        void* Sights() const { return ReadStaticField<void*>("Sights"); }
        void* Coolings() const { return ReadStaticField<void*>("Coolings"); }
        void* Parts() const { return ReadStaticField<void*>("Parts"); }
        int GunpowderTech() const { return ReadStaticField<int>("GunpowderTech"); }
    };
}
