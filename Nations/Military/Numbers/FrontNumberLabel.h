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
        bool SetMen(int men) const { void* args[] = { &men }; return CallValue<bool>("SetMen", args, 1); }
        void SetStyle(void* mat, void* fill) const { void* args[] = { mat, fill }; Call("SetStyle", args, 2); }
        void SetGoal(void* world, void* along, float emWorld, float deadWorld, float farWorld) const { void* args[] = { world, along, &emWorld, &deadWorld, &farWorld }; Call("SetGoal", args, 5); }
        bool Tick(float dt, float glide, float alpha) const { void* args[] = { &dt, &glide, &alpha }; return CallValue<bool>("Tick", args, 3); }
        bool Overlaps(void* o) const { void* args[] = { o }; return CallValue<bool>("Overlaps", args, 1); }
        void* tmp() const { return ReadField<void*>("tmp"); }
        void* anchorTile() const { return ReadField<void*>("anchorTile"); }
        void SetAnchorTile(void* value) const { WriteField<void*>("anchorTile", value); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
        bool Crowded() const { return ReadField<bool>("Crowded"); }
        void SetCrowded(bool value) const { WriteField<bool>("Crowded", value); }
    };
}
