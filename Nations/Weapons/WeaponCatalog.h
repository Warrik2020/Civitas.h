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
        void* O(const char* key, const char* name, const char* blurb, void* techs) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(blurb ? blurb : "") : nullptr; void* args[] = { managed_0, managed_1, managed_2, techs }; return CallStatic("O", args, 4); }
        void Check(void* table, void* enumType) const { void* args[] = { table, enumType }; CallStatic("Check", args, 2); }
        int Clamp(int v, int count) const { void* args[] = { &v, &count }; return CallStaticValue<int>("Clamp", args, 2); }
        bool IsShape(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("IsShape", args, 1); }
        bool IsShape(void* p) const { void* args[] = { p }; return CallStaticValue<bool>("IsShape", args, 1); }
        int RealPartCount(void* d) const { void* args[] = { d }; return CallStaticValue<int>("RealPartCount", args, 1); }
        void* Options(int l) const { void* args[] = { &l }; return CallStatic("Options", args, 1); }
        void* LadderName(int l) const { void* args[] = { &l }; return CallStatic("LadderName", args, 1); }
        int Current(void* d, int l) const { void* args[] = { d, &l }; return CallStaticValue<int>("Current", args, 2); }
        void Set(void* d, int l, int index) const { void* args[] = { d, &l, &index }; CallStatic("Set", args, 3); }
        void* Option(void* d, int l) const { void* args[] = { d, &l }; return CallStatic("Option", args, 2); }
        void* SpecOf(void* d) const { void* args[] = { d }; return CallStatic("SpecOf", args, 1); }
        void* OptionsFor(void* d, int ladder) const { void* args[] = { d, &ladder }; return CallStatic("OptionsFor", args, 2); }
        void* LadderNameFor(void* d, int ladder) const { void* args[] = { d, &ladder }; return CallStatic("LadderNameFor", args, 2); }
        void* LaddersOf(void* d) const { void* args[] = { d }; return CallStatic("LaddersOf", args, 1); }
        int LadderCountOf(void* d) const { void* args[] = { d }; return CallStaticValue<int>("LadderCountOf", args, 1); }
        bool HasTopView(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("HasTopView", args, 1); }
        int CurrentOf(void* d, int ladder) const { void* args[] = { d, &ladder }; return CallStaticValue<int>("CurrentOf", args, 2); }
        void SetChoice(void* d, int ladder, int index) const { void* args[] = { d, &ladder, &index }; CallStatic("SetChoice", args, 3); }
        void* OptionOf(void* d, int ladder) const { void* args[] = { d, &ladder }; return CallStatic("OptionOf", args, 2); }
        void* TechName(int techIndex) const { void* args[] = { &techIndex }; return CallStatic("TechName", args, 1); }
        bool Available(void* it, void* o) const { void* args[] = { it, o }; return CallStaticValue<bool>("Available", args, 2); }
        void* LockReason(void* it, void* o) const { void* args[] = { it, o }; return CallStatic("LockReason", args, 2); }
        void* LockReasonDated(void* it, void* o) const { void* args[] = { it, o }; return CallStatic("LockReasonDated", args, 2); }
        void AddLockIssues(void* it, void* d, void* issues) const { void* args[] = { it, d, issues }; CallStatic("AddLockIssues", args, 3); }
        bool DesignerUnlocked(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("DesignerUnlocked", args, 1); }
        void* FirstLock(void* it, void* d) const { void* args[] = { it, d }; return CallStatic("FirstLock", args, 2); }
        float DueYear(void* d) const { void* args[] = { d }; return CallStaticValue<float>("DueYear", args, 1); }
        void AvailableIndices(void* it, int l, void* into) const { void* args[] = { it, &l, into }; CallStatic("AvailableIndices", args, 3); }
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
