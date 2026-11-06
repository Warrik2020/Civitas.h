#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Numbers
{
    class FrontNumberLabel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontNumberLabel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Numbers", "FrontNumberLabel") {}
    public:
        void Destroy() const { Call("Destroy", nullptr, 0); }
        void Kill() const { Call("Kill", nullptr, 0); }
        void Revive() const { Call("Revive", nullptr, 0); }
        bool SetMen(int men) const { void* __callArgs[] = { &men }; return CallValue<bool>("SetMen", __callArgs, 1); }
        void SetStyle(void* mat, void* fill) const { void* __callArgs[] = { mat, fill }; Call("SetStyle", __callArgs, 2); }
        void SetGoal(void* world, void* along, float emWorld, float deadWorld, float farWorld) const { void* __callArgs[] = { world, along, &emWorld, &deadWorld, &farWorld }; Call("SetGoal", __callArgs, 5); }
        bool Tick(float dt, float glide, float alpha) const { void* __callArgs[] = { &dt, &glide, &alpha }; return CallValue<bool>("Tick", __callArgs, 3); }
        bool Overlaps(void* o) const { void* __callArgs[] = { o }; return CallValue<bool>("Overlaps", __callArgs, 1); }
        void* tmp() const { return ReadField<void*>("tmp"); }
        void* anchorTile() const { return ReadField<void*>("anchorTile"); }
        void anchorTile(void* value) const { WriteField<void*>("anchorTile", value); }
        int foe() const { return ReadField<int>("foe"); }
        void foe(int value) const { WriteField<int>("foe", value); }
        bool Crowded() const { return ReadField<bool>("Crowded"); }
        void Crowded(bool value) const { WriteField<bool>("Crowded", value); }
    };
}
