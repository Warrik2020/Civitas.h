#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class CommandBar : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandBar(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "CommandBar") {}
    public:
        bool CardSpan(float& left, float& right) const { void* args[] = { &left, &right }; return CallStaticValue<bool>("CardSpan", args, 2); }
        float BriefingClearance() const { return ReadStaticField<float>("BriefingClearance"); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* rt() const { return ReadField<void*>("rt"); }
        void SetRt(void* value) const { WriteField<void*>("rt", value); }
        void* face() const { return ReadField<void*>("face"); }
        void SetFace(void* value) const { WriteField<void*>("face", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* glyph() const { return ReadField<void*>("glyph"); }
        void SetGlyph(void* value) const { WriteField<void*>("glyph", value); }
        void* badge() const { return ReadField<void*>("badge"); }
        void SetBadge(void* value) const { WriteField<void*>("badge", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* sub() const { return ReadField<void*>("sub"); }
        void SetSub(void* value) const { WriteField<void*>("sub", value); }
        void* big() const { return ReadField<void*>("big"); }
        void SetBig(void* value) const { WriteField<void*>("big", value); }
        void* strength() const { return ReadField<void*>("strength"); }
        void SetStrength(void* value) const { WriteField<void*>("strength", value); }
        void* org() const { return ReadField<void*>("org"); }
        void SetOrg(void* value) const { WriteField<void*>("org", value); }
        void* planning() const { return ReadField<void*>("planning"); }
        void SetPlanning(void* value) const { WriteField<void*>("planning", value); }
        void* layout() const { return ReadField<void*>("layout"); }
        void SetLayout(void* value) const { WriteField<void*>("layout", value); }
        void* badges() const { return ReadField<void*>("badges"); }
        void SetBadges(void* value) const { WriteField<void*>("badges", value); }
        void* badgeOn() const { return ReadField<void*>("badgeOn"); }
        void SetBadgeOn(void* value) const { WriteField<void*>("badgeOn", value); }
        void* del() const { return ReadField<void*>("del"); }
        void SetDel(void* value) const { WriteField<void*>("del", value); }
        void* delHover() const { return ReadField<void*>("delHover"); }
        void SetDelHover(void* value) const { WriteField<void*>("delHover", value); }
        void* hover() const { return ReadField<void*>("hover"); }
        void SetHover(void* value) const { WriteField<void*>("hover", value); }
        void* group() const { return ReadField<void*>("group"); }
        void SetGroup(void* value) const { WriteField<void*>("group", value); }
        void* kind() const { return ReadField<void*>("kind"); }
        void SetKind(void* value) const { WriteField<void*>("kind", value); }
        void* army() const { return ReadField<void*>("army"); }
        void SetArmy(void* value) const { WriteField<void*>("army", value); }
        int slot() const { return ReadField<int>("slot"); }
        void SetSlot(int value) const { WriteField<int>("slot", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* rt() const { return ReadField<void*>("rt"); }
        void SetRt(void* value) const { WriteField<void*>("rt", value); }
        void* face() const { return ReadField<void*>("face"); }
        void SetFace(void* value) const { WriteField<void*>("face", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* del() const { return ReadField<void*>("del"); }
        void SetDel(void* value) const { WriteField<void*>("del", value); }
        void* exec() const { return ReadField<void*>("exec"); }
        void SetExec(void* value) const { WriteField<void*>("exec", value); }
        void* marshal() const { return ReadField<void*>("marshal"); }
        void SetMarshal(void* value) const { WriteField<void*>("marshal", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* hover() const { return ReadField<void*>("hover"); }
        void SetHover(void* value) const { WriteField<void*>("hover", value); }
        void* delHover() const { return ReadField<void*>("delHover"); }
        void SetDelHover(void* value) const { WriteField<void*>("delHover", value); }
        void* execHover() const { return ReadField<void*>("execHover"); }
        void SetExecHover(void* value) const { WriteField<void*>("execHover", value); }
        void* group() const { return ReadField<void*>("group"); }
        void SetGroup(void* value) const { WriteField<void*>("group", value); }
        int divisions() const { return ReadField<int>("divisions"); }
        void SetDivisions(int value) const { WriteField<int>("divisions", value); }
        int fighting() const { return ReadField<int>("fighting"); }
        void SetFighting(int value) const { WriteField<int>("fighting", value); }
        int shortKit() const { return ReadField<int>("shortKit"); }
        void SetShortKit(int value) const { WriteField<int>("shortKit", value); }
        int cutOff() const { return ReadField<int>("cutOff"); }
        void SetCutOff(int value) const { WriteField<int>("cutOff", value); }
        float men() const { return ReadField<float>("men"); }
        void SetMen(float value) const { WriteField<float>("men", value); }
        float cap() const { return ReadField<float>("cap"); }
        void SetCap(float value) const { WriteField<float>("cap", value); }
        float org() const { return ReadField<float>("org"); }
        void SetOrg(float value) const { WriteField<float>("org", value); }
        float supplyMul() const { return ReadField<float>("supplyMul"); }
        void SetSupplyMul(float value) const { WriteField<float>("supplyMul", value); }
    };
}
