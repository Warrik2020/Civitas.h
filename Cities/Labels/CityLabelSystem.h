#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Labels
{
    class CityLabelSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityLabelSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Labels", "CityLabelSystem") {}
    public:
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void SetEmphasis(void* cityIds) const { void* args[] = { cityIds }; CallStatic("SetEmphasis", args, 1); }
        void* tr() const { return ReadField<void*>("tr"); }
        void SetTr(void* value) const { WriteField<void*>("tr", value); }
        void* tmp() const { return ReadField<void*>("tmp"); }
        void SetTmp(void* value) const { WriteField<void*>("tmp", value); }
        void* mr() const { return ReadField<void*>("mr"); }
        void SetMr(void* value) const { WriteField<void*>("mr", value); }
        int textKey() const { return ReadField<int>("textKey"); }
        void SetTextKey(int value) const { WriteField<int>("textKey", value); }
        void* wrotePos() const { return ReadField<void*>("wrotePos"); }
        void SetWrotePos(void* value) const { WriteField<void*>("wrotePos", value); }
        float wroteScale() const { return ReadField<float>("wroteScale"); }
        void SetWroteScale(float value) const { WriteField<float>("wroteScale", value); }
        bool shown() const { return ReadField<bool>("shown"); }
        void SetShown(bool value) const { WriteField<bool>("shown", value); }
        bool emphasised() const { return ReadField<bool>("emphasised"); }
        void SetEmphasised(bool value) const { WriteField<bool>("emphasised", value); }
    };
}
