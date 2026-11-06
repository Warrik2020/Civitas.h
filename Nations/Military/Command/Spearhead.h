#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class Spearhead : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Spearhead(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "Spearhead") {}
    public:
        void* Clone() const { return Call("Clone", nullptr, 0); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int opId() const { return ReadField<int>("opId"); }
        void SetOpId(int value) const { WriteField<int>("opId", value); }
        void* controls() const { return ReadField<void*>("controls"); }
        void* path() const { return ReadField<void*>("path"); }
        void* divisionIds() const { return ReadField<void*>("divisionIds"); }
        bool autoPick() const { return ReadField<bool>("autoPick"); }
        void SetAutoPick(bool value) const { WriteField<bool>("autoPick", value); }
        float progress() const { return ReadField<float>("progress"); }
        void SetProgress(float value) const { WriteField<float>("progress", value); }
    };
}
