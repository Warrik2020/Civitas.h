#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Rendering
{
    class CityRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Rendering", "CityRenderer") {}
    public:
        void Sync(void* cities) const { void* args[] = { cities }; Call("Sync", args, 1); }
        void Forget(int cityId) const { void* args[] = { &cityId }; Call("Forget", args, 1); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void* v() const { return ReadField<void*>("v"); }
        void* c() const { return ReadField<void*>("c"); }
        void* t() const { return ReadField<void*>("t"); }
        float latestSpawn() const { return ReadField<float>("latestSpawn"); }
        void SetLatestSpawn(float value) const { WriteField<float>("latestSpawn", value); }
    };
}
