#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesPanel") {}
    public:
        void Toggle() const { Call("Toggle", nullptr, 0); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        bool Prebuild() const { return CallValue<bool>("Prebuild", nullptr, 0); }
        void OpenOn(int axis, int groupId) const { void* args[] = { &axis, &groupId }; Call("OpenOn", args, 2); }
        void ShowScreenPage(void* page) const { void* args[] = { page }; Call("ShowScreenPage", args, 1); }
        void OpenFamiliesOn(int axis, int groupId) const { void* args[] = { &axis, &groupId }; Call("OpenFamiliesOn", args, 2); }
        void OpenDrawing(int axis, bool erase) const { void* args[] = { &axis, &erase }; Call("OpenDrawing", args, 2); }
        void SelectCount(int axis) const { void* args[] = { &axis }; Call("SelectCount", args, 1); }
        void Report(void* r) const { void* args[] = { &r }; Call("Report", args, 1); }
        void RequestRefresh() const { Call("RequestRefresh", nullptr, 0); }
        void BeginDrawing(int axis, bool erase) const { void* args[] = { &axis, &erase }; Call("BeginDrawing", args, 2); }
        void OpenAreaMap(int axis) const { void* args[] = { &axis }; Call("OpenAreaMap", args, 1); }
        void ShowCountOnMap(int axis) const { void* args[] = { &axis }; Call("ShowCountOnMap", args, 1); }
    };
}
