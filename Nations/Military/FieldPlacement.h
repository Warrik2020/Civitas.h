#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class FieldPlacement : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FieldPlacement(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "FieldPlacement") {}
    public:
        void* front() const { return ReadField<void*>("front"); }
        void SetFront(void* value) const { WriteField<void*>("front", value); }
        void* facing() const { return ReadField<void*>("facing"); }
        void SetFacing(void* value) const { WriteField<void*>("facing", value); }
        float halfWidth() const { return ReadField<float>("halfWidth"); }
        void SetHalfWidth(float value) const { WriteField<float>("halfWidth", value); }
        float standoffM() const { return ReadField<float>("standoffM"); }
        void SetStandoffM(float value) const { WriteField<float>("standoffM", value); }
        int pairKey() const { return ReadField<int>("pairKey"); }
        void SetPairKey(int value) const { WriteField<int>("pairKey", value); }
    };
}
