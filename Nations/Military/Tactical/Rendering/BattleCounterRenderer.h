#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Rendering
{
    class BattleCounterRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleCounterRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Rendering", "BattleCounterRenderer") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Hide() const { Call("Hide", nullptr, 0); }
        int PickOffField(void* world) const { void* args[] = { world }; return CallValue<int>("PickOffField", args, 1); }
        int PickDivision(void* world) const { void* args[] = { world }; return CallValue<int>("PickDivision", args, 1); }
        void Sync(float dt) const { void* args[] = { &dt }; Call("Sync", args, 1); }
        void* tr() const { return ReadField<void*>("tr"); }
        void SetTr(void* value) const { WriteField<void*>("tr", value); }
        void* tmp() const { return ReadField<void*>("tmp"); }
        void SetTmp(void* value) const { WriteField<void*>("tmp", value); }
        void* mr() const { return ReadField<void*>("mr"); }
        void SetMr(void* value) const { WriteField<void*>("mr", value); }
        void* wrote() const { return ReadField<void*>("wrote"); }
        void SetWrote(void* value) const { WriteField<void*>("wrote", value); }
        bool shown() const { return ReadField<bool>("shown"); }
        void SetShown(bool value) const { WriteField<bool>("shown", value); }
        int divisionId() const { return ReadField<int>("divisionId"); }
        void SetDivisionId(int value) const { WriteField<int>("divisionId", value); }
        void* centre() const { return ReadField<void*>("centre"); }
        void SetCentre(void* value) const { WriteField<void*>("centre", value); }
        float halfW() const { return ReadField<float>("halfW"); }
        void SetHalfW(float value) const { WriteField<float>("halfW", value); }
        float halfH() const { return ReadField<float>("halfH"); }
        void SetHalfH(float value) const { WriteField<float>("halfH", value); }
    };
}
