#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class ArmyInspector : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmyInspector(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "ArmyInspector") {}
    public:
        void Open() const { CallStatic("Open", nullptr, 0); }
        void Close() const { CallStatic("Close", nullptr, 0); }
        void CloseAll() const { CallStatic("CloseAll", nullptr, 0); }
        void Toggle() const { CallStatic("Toggle", nullptr, 0); }
        void YieldDock() const { CallStatic("YieldDock", nullptr, 0); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        void* badge() const { return ReadField<void*>("badge"); }
        void SetBadge(void* value) const { WriteField<void*>("badge", value); }
        int generalId() const { return ReadField<int>("generalId"); }
        void SetGeneralId(int value) const { WriteField<int>("generalId", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        void* box() const { return ReadField<void*>("box"); }
        void SetBox(void* value) const { WriteField<void*>("box", value); }
        void* check() const { return ReadField<void*>("check"); }
        void SetCheck(void* value) const { WriteField<void*>("check", value); }
        int spearheadId() const { return ReadField<int>("spearheadId"); }
        void SetSpearheadId(int value) const { WriteField<int>("spearheadId", value); }
        int index() const { return ReadField<int>("index"); }
        void SetIndex(int value) const { WriteField<int>("index", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* face() const { return ReadField<void*>("face"); }
        void SetFace(void* value) const { WriteField<void*>("face", value); }
        void* glyph() const { return ReadField<void*>("glyph"); }
        void SetGlyph(void* value) const { WriteField<void*>("glyph", value); }
        void* flag() const { return ReadField<void*>("flag"); }
        void SetFlag(void* value) const { WriteField<void*>("flag", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* levy() const { return ReadField<void*>("levy"); }
        void SetLevy(void* value) const { WriteField<void*>("levy", value); }
        void* activity() const { return ReadField<void*>("activity"); }
        void SetActivity(void* value) const { WriteField<void*>("activity", value); }
        void* men() const { return ReadField<void*>("men"); }
        void SetMen(void* value) const { WriteField<void*>("men", value); }
        void* org() const { return ReadField<void*>("org"); }
        void SetOrg(void* value) const { WriteField<void*>("org", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int flagFor() const { return ReadField<int>("flagFor"); }
        void SetFlagFor(int value) const { WriteField<int>("flagFor", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* note() const { return ReadField<void*>("note"); }
        void SetNote(void* value) const { WriteField<void*>("note", value); }
        int divisions() const { return ReadField<int>("divisions"); }
        void SetDivisions(int value) const { WriteField<int>("divisions", value); }
        int fighting() const { return ReadField<int>("fighting"); }
        void SetFighting(int value) const { WriteField<int>("fighting", value); }
        int shortKit() const { return ReadField<int>("shortKit"); }
        void SetShortKit(int value) const { WriteField<int>("shortKit", value); }
        int cutOff() const { return ReadField<int>("cutOff"); }
        void SetCutOff(int value) const { WriteField<int>("cutOff", value); }
        int overdue() const { return ReadField<int>("overdue"); }
        void SetOverdue(int value) const { WriteField<int>("overdue", value); }
        int loose() const { return ReadField<int>("loose"); }
        void SetLoose(int value) const { WriteField<int>("loose", value); }
        int armied() const { return ReadField<int>("armied"); }
        void SetArmied(int value) const { WriteField<int>("armied", value); }
        int pinned() const { return ReadField<int>("pinned"); }
        void SetPinned(int value) const { WriteField<int>("pinned", value); }
        int dismissable() const { return ReadField<int>("dismissable"); }
        void SetDismissable(int value) const { WriteField<int>("dismissable", value); }
        float men() const { return ReadField<float>("men"); }
        void SetMen(float value) const { WriteField<float>("men", value); }
        float org() const { return ReadField<float>("org"); }
        void SetOrg(float value) const { WriteField<float>("org", value); }
        float supply() const { return ReadField<float>("supply"); }
        void SetSupply(float value) const { WriteField<float>("supply", value); }
        float cap() const { return ReadField<float>("cap"); }
        void SetCap(float value) const { WriteField<float>("cap", value); }
    };
}
