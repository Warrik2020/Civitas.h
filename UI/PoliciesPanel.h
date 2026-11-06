#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PoliciesPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PoliciesPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PoliciesPanel") {}
    public:
        void ShowReunite() const { CallStatic("ShowReunite", nullptr, 0); }
        void ShowTree(int kind) const { void* args[] = { &kind }; CallStatic("ShowTree", args, 1); }
        void ShowBranch(int kind, int target, void* step) const { void* args[] = { &kind, &target, step }; CallStatic("ShowBranch", args, 3); }
        void HideIfOpen() const { CallStatic("HideIfOpen", nullptr, 0); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void OpenOrToggle() const { Call("OpenOrToggle", nullptr, 0); }
        void* step() const { return ReadField<void*>("step"); }
        void SetStep(void* value) const { WriteField<void*>("step", value); }
        int target() const { return ReadField<int>("target"); }
        void SetTarget(int value) const { WriteField<int>("target", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* haloGo() const { return ReadField<void*>("haloGo"); }
        void SetHaloGo(void* value) const { WriteField<void*>("haloGo", value); }
        void* halo() const { return ReadField<void*>("halo"); }
        void SetHalo(void* value) const { WriteField<void*>("halo", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* caption() const { return ReadField<void*>("caption"); }
        void SetCaption(void* value) const { WriteField<void*>("caption", value); }
        void* centre() const { return ReadField<void*>("centre"); }
        void SetCentre(void* value) const { WriteField<void*>("centre", value); }
        int target() const { return ReadField<int>("target"); }
        void SetTarget(int value) const { WriteField<int>("target", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* tiesFill() const { return ReadField<void*>("tiesFill"); }
        void SetTiesFill(void* value) const { WriteField<void*>("tiesFill", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* line() const { return ReadField<void*>("line"); }
        void SetLine(void* value) const { WriteField<void*>("line", value); }
        void* line2() const { return ReadField<void*>("line2"); }
        void SetLine2(void* value) const { WriteField<void*>("line2", value); }
        void* line3() const { return ReadField<void*>("line3"); }
        void SetLine3(void* value) const { WriteField<void*>("line3", value); }
        void* line4() const { return ReadField<void*>("line4"); }
        void SetLine4(void* value) const { WriteField<void*>("line4", value); }
        int origin() const { return ReadField<int>("origin"); }
        void SetOrigin(int value) const { WriteField<int>("origin", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        float x0() const { return ReadField<float>("x0"); }
        void SetX0(float value) const { WriteField<float>("x0", value); }
        float x1() const { return ReadField<float>("x1"); }
        void SetX1(float value) const { WriteField<float>("x1", value); }
        int first() const { return ReadField<int>("first"); }
        void SetFirst(int value) const { WriteField<int>("first", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        bool shown() const { return ReadField<bool>("shown"); }
        void SetShown(bool value) const { WriteField<bool>("shown", value); }
    };
}
