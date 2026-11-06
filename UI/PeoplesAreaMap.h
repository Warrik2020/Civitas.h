#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesAreaMap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesAreaMap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesAreaMap") {}
    public:
        void Build(void* canvas) const { void* args[] = { canvas }; Call("Build", args, 1); }
        bool Begin(int axis) const { void* args[] = { &axis }; return CallValue<bool>("Begin", args, 1); }
        void End(bool restoreWindow) const { void* args[] = { &restoreWindow }; Call("End", args, 1); }
        void Tick() const { Call("Tick", nullptr, 0); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* swatch() const { return ReadField<void*>("swatch"); }
        void SetSwatch(void* value) const { WriteField<void*>("swatch", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* share() const { return ReadField<void*>("share"); }
        void SetShare(void* value) const { WriteField<void*>("share", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        void SetTiles(void* value) const { WriteField<void*>("tiles", value); }
        int root() const { return ReadField<int>("root"); }
        void SetRoot(int value) const { WriteField<int>("root", value); }
        bool hovered() const { return ReadField<bool>("hovered"); }
        void SetHovered(bool value) const { WriteField<bool>("hovered", value); }
        int root() const { return ReadField<int>("root"); }
        void SetRoot(int value) const { WriteField<int>("root", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        float share() const { return ReadField<float>("share"); }
        void SetShare(float value) const { WriteField<float>("share", value); }
        bool crown() const { return ReadField<bool>("crown"); }
        void SetCrown(bool value) const { WriteField<bool>("crown", value); }
    };
}
