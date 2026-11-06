#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class RouteEta : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RouteEta(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "RouteEta") {}
    public:
        void* tile() const { return ReadField<void*>("tile"); }
        void SetTile(void* value) const { WriteField<void*>("tile", value); }
        float ticks() const { return ReadField<float>("ticks"); }
        void SetTicks(float value) const { WriteField<float>("ticks", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        void* at() const { return ReadField<void*>("at"); }
        void SetAt(void* value) const { WriteField<void*>("at", value); }
        float ticks() const { return ReadField<float>("ticks"); }
        void SetTicks(float value) const { WriteField<float>("ticks", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
    };
}
