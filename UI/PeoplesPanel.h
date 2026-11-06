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
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        bool Prebuild() const { return CallValue<bool>("Prebuild", nullptr, 0); }
        void OpenOn(int axis, int groupId) const { void* __callArgs[] = { &axis, &groupId }; Call("OpenOn", __callArgs, 2); }
        void ShowScreenPage(void* page) const { void* __callArgs[] = { page }; Call("ShowScreenPage", __callArgs, 1); }
        void OpenFamiliesOn(int axis, int groupId) const { void* __callArgs[] = { &axis, &groupId }; Call("OpenFamiliesOn", __callArgs, 2); }
        void OpenDrawing(int axis, bool erase) const { void* __callArgs[] = { &axis, &erase }; Call("OpenDrawing", __callArgs, 2); }
        void SelectCount(int axis) const { void* __callArgs[] = { &axis }; Call("SelectCount", __callArgs, 1); }
        void Report(void* r) const { void* __callArgs[] = { &r }; Call("Report", __callArgs, 1); }
        void RequestRefresh() const { Call("RequestRefresh", nullptr, 0); }
        void BeginDrawing(int axis, bool erase) const { void* __callArgs[] = { &axis, &erase }; Call("BeginDrawing", __callArgs, 2); }
        void OpenAreaMap(int axis) const { void* __callArgs[] = { &axis }; Call("OpenAreaMap", __callArgs, 1); }
        void ShowCountOnMap(int axis) const { void* __callArgs[] = { &axis }; Call("ShowCountOnMap", __callArgs, 1); }
    };
}
