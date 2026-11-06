#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Weapons
{
    class WeaponDesignPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponDesignPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Weapons", "WeaponDesignPanel") {}
    public:
        void* OrganColor(float protection) const { void* args[] = { &protection }; return CallStatic("OrganColor", args, 1); }
        bool IsPaired(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("IsPaired", args, 1); }
        void* OpenFor(void** args = nullptr, int count = 0) const { return CallStatic("OpenFor", args, count); }
        void* OpenNew(void** args = nullptr, int count = 0) const { return CallStatic("OpenNew", args, count); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* mark() const { return ReadField<void*>("mark"); }
        void SetMark(void* value) const { WriteField<void*>("mark", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* material() const { return ReadField<void*>("material"); }
        void SetMaterial(void* value) const { WriteField<void*>("material", value); }
        int index() const { return ReadField<int>("index"); }
        void SetIndex(int value) const { WriteField<int>("index", value); }
        bool hovered() const { return ReadField<bool>("hovered"); }
        void SetHovered(bool value) const { WriteField<bool>("hovered", value); }
        void* issue() const { return ReadField<void*>("issue"); }
        void SetIssue(void* value) const { WriteField<void*>("issue", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* fix() const { return ReadField<void*>("fix"); }
        void SetFix(void* value) const { WriteField<void*>("fix", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        bool offersFix() const { return ReadField<bool>("offersFix"); }
        void SetOffersFix(bool value) const { WriteField<bool>("offersFix", value); }
        void* orig() const { return ReadField<void*>("orig"); }
        void SetOrig(void* value) const { WriteField<void*>("orig", value); }
        void* partner() const { return ReadField<void*>("partner"); }
        void SetPartner(void* value) const { WriteField<void*>("partner", value); }
        void* follower() const { return ReadField<void*>("follower"); }
        void SetFollower(void* value) const { WriteField<void*>("follower", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* le() const { return ReadField<void*>("le"); }
        void SetLe(void* value) const { WriteField<void*>("le", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* value() const { return ReadField<void*>("value"); }
        void SetValue(void* value) const { WriteField<void*>("value", value); }
        void* change() const { return ReadField<void*>("change"); }
        void SetChange(void* value) const { WriteField<void*>("change", value); }
    };
}
