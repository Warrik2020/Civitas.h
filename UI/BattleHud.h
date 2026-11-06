#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class BattleHud : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleHud(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "BattleHud") {}
    public:
        void ShowResult(void* r) const { void* args[] = { r }; CallStatic("ShowResult", args, 1); }
        void* Controls() const { return ReadStaticField<void*>("Controls"); }
        float t() const { return ReadField<float>("t"); }
        void SetT(float value) const { WriteField<float>("t", value); }
        int lost0() const { return ReadField<int>("lost0"); }
        void SetLost0(int value) const { WriteField<int>("lost0", value); }
        int lost1() const { return ReadField<int>("lost1"); }
        void SetLost1(int value) const { WriteField<int>("lost1", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        float until() const { return ReadField<float>("until"); }
        void SetUntil(float value) const { WriteField<float>("until", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* face() const { return ReadField<void*>("face"); }
        void SetFace(void* value) const { WriteField<void*>("face", value); }
        void* strength() const { return ReadField<void*>("strength"); }
        void SetStrength(void* value) const { WriteField<void*>("strength", value); }
        void* morale() const { return ReadField<void*>("morale"); }
        void SetMorale(void* value) const { WriteField<void*>("morale", value); }
        void* arm() const { return ReadField<void*>("arm"); }
        void SetArm(void* value) const { WriteField<void*>("arm", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        int formation() const { return ReadField<int>("formation"); }
        void SetFormation(int value) const { WriteField<int>("formation", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* men() const { return ReadField<void*>("men"); }
        void SetMen(void* value) const { WriteField<void*>("men", value); }
        void* autoCheck() const { return ReadField<void*>("autoCheck"); }
        void SetAutoCheck(void* value) const { WriteField<void*>("autoCheck", value); }
        void* swatch() const { return ReadField<void*>("swatch"); }
        void SetSwatch(void* value) const { WriteField<void*>("swatch", value); }
        int simDivision() const { return ReadField<int>("simDivision"); }
        void SetSimDivision(int value) const { WriteField<int>("simDivision", value); }
        void* cards() const { return ReadField<void*>("cards"); }
    };
}
