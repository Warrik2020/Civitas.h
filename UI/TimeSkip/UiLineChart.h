#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::TimeSkip
{
    class UiLineChart : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiLineChart(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.TimeSkip", "UiLineChart") {}
    public:
        void SetSeries(void* times, void* values, void* line, float baseline) const { void* args[] = { times, values, line, &baseline }; Call("SetSeries", args, 4); }
        void* gridColor() const { return ReadField<void*>("gridColor"); }
        void SetGridColor(void* value) const { WriteField<void*>("gridColor", value); }
        void* baselineColor() const { return ReadField<void*>("baselineColor"); }
        void SetBaselineColor(void* value) const { WriteField<void*>("baselineColor", value); }
        float thickness() const { return ReadField<float>("thickness"); }
        void SetThickness(float value) const { WriteField<float>("thickness", value); }
    };
}
