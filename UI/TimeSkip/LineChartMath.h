#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::TimeSkip
{
    class LineChartMath : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LineChartMath(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.TimeSkip", "LineChartMath") {}
    public:
        void Range(void* values, float baseline, float& min_, float& max_) const { void* __callArgs[] = { values, &baseline, &min_, &max_ }; CallStatic("Range", __callArgs, 4); }
        float Map(float v, float min_, float max_) const { void* __callArgs[] = { &v, &min_, &max_ }; return CallStaticValue<float>("Map", __callArgs, 3); }
    };
}
